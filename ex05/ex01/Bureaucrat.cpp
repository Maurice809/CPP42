/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Bureaucrat.cpp                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aducret <ambrodu@gmail.com>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/16 15:19:18 by aducret           #+#    #+#             */
/*   Updated: 2023/02/17 20:38:52 by aducret          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Bureaucrat.hpp"

Bureaucrat::Bureaucrat(std::string name, int grade) : _name(name), _grade(grade)
{
	if (grade < 1)
		throw Bureaucrat::GradeTooHighException();
	else if (grade > 150)
		throw Bureaucrat::GradeTooLowException();
}

Bureaucrat::Bureaucrat(Bureaucrat const & src) : _name(src.getName()), _grade(src.getGrade())
{
}

Bureaucrat::~Bureaucrat(void)
{
}

Bureaucrat & Bureaucrat::operator=(Bureaucrat const & rhs)
{
	if (this != &rhs)
	{
		this->_grade = rhs.getGrade();
	}
	return (*this);
}

std::string Bureaucrat::getName(void) const
{
	return (this->_name);
}

int Bureaucrat::getGrade(void) const
{
	return (this->_grade);
}

void Bureaucrat::incrementGrade(void)
{
	if (this->_grade - 1 < 1)
		throw Bureaucrat::GradeTooHighException();
	else
		this->_grade--;
}

void Bureaucrat::decrementGrade(void)
{
	if (this->_grade + 1 > 150)
		throw Bureaucrat::GradeTooLowException();
	else
		this->_grade++;
}

Bureaucrat::GradeTooHighException::GradeTooHighException(void)
{
}

Bureaucrat::GradeTooHighException::GradeTooHighException(GradeTooHighException const & src)
{
	*this = src;
}

Bureaucrat::GradeTooHighException::~GradeTooHighException(void) throw()
{
}

Bureaucrat::GradeTooHighException &	Bureaucrat::GradeTooHighException::operator=(GradeTooHighException const & rhs)
{
	(void)rhs;
	return (*this);
}

const char * Bureaucrat::GradeTooHighException::what() const throw()
{
	return ("Grade too high");
}

Bureaucrat::GradeTooLowException::GradeTooLowException(void)
{
}

Bureaucrat::GradeTooLowException::GradeTooLowException(GradeTooLowException const & src)
{
	*this = src;
}

Bureaucrat::GradeTooLowException::~GradeTooLowException(void) throw()
{
}

Bureaucrat::GradeTooLowException & Bureaucrat::GradeTooLowException::operator=(GradeTooLowException const & rhs)
{
	(void)rhs;
	return (*this);
}

const char * Bureaucrat::GradeTooLowException::what() const throw()
{
	return ("Grade too low");
}

std::ostream & operator<<(std::ostream & o, Bureaucrat const & rhs)
{
	o << rhs.getName() << ", bureaucrat grade " << rhs.getGrade();
	return (o);
}
