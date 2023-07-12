/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Form.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aducret <ambrodu@gmail.com>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/17 20:41:17 by aducret           #+#    #+#             */
/*   Updated: 2023/02/17 20:52:23 by aducret          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Form.hpp"

Form::Form(std::string name, int gradeToSign, int gradeToExecute) : _name(name), _signed(false), _gradeToSign(gradeToSign), _gradeToExecute(gradeToExecute)
{
	if (gradeToSign < 1 || gradeToExecute < 1)
		throw Form::GradeTooHighException();
	else if (gradeToSign > 150 || gradeToExecute > 150)
		throw Form::GradeTooLowException();
}

Form::Form(Form const & src) : _name(src.getName()), _signed(src.getSigned()), _gradeToSign(src.getGradeToSign()), _gradeToExecute(src.getGradeToExecute())
{
}

Form::~Form(void)
{
}

Form & Form::operator=(Form const & rhs)
{
	_signed = rhs.getSigned();
	return *this;
}

std::string const & Form::getName(void) const
{
	return _name;
}

bool Form::getSigned(void) const
{
	return _signed;
}

int Form::getGradeToSign(void) const
{
	return _gradeToSign;
}

int Form::getGradeToExecute(void) const
{
	return _gradeToExecute;
}

void Form::beSigned(Bureaucrat const & bureaucrat)
{
	if (bureaucrat.getGrade() > _gradeToSign)
		throw Form::GradeTooLowException();
	else
		_signed = true;
}

Form::GradeTooHighException::GradeTooHighException(void)
{
}

Form::GradeTooHighException::GradeTooHighException(GradeTooHighException const & src)
{
	*this = src;
}

Form::GradeTooHighException::~GradeTooHighException(void) throw()
{
}

Form::GradeTooHighException & Form::GradeTooHighException::operator=(GradeTooHighException const & rhs)
{
	(void)rhs;
	return *this;
}

const char * Form::GradeTooHighException::what() const throw()
{
	return "Grade too high";
}

Form::GradeTooLowException::GradeTooLowException(void)
{
}

Form::GradeTooLowException::GradeTooLowException(GradeTooLowException const & src)
{
	*this = src;
}

Form::GradeTooLowException::~GradeTooLowException(void) throw()
{
}

Form::GradeTooLowException & Form::GradeTooLowException::operator=(GradeTooLowException const & rhs)
{
	(void)rhs;
	return *this;
}

const char * Form::GradeTooLowException::what() const throw()
{
	return "Grade too low";
}

std::ostream & operator<<(std::ostream & o, Form const & rhs)
{
	o << "Form " << rhs.getName() << " is " << (rhs.getSigned() ? "signed" : "unsigned") << " and requires a grade of " << rhs.getGradeToSign() << " to be signed and a grade of " << rhs.getGradeToExecute() << " to be executed." << std::endl;
	return o;
}

void Form::signForm(Bureaucrat const & bureaucrat)
{
	try
	{
		beSigned(bureaucrat);
		std::cout << bureaucrat.getName() << " signs " << getName() << std::endl;
	}
	catch (std::exception & e)
	{
		std::cout << bureaucrat.getName() << " cannot sign " << getName() << " because " << e.what() << std::endl;
	}
}