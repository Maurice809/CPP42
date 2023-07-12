/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Form.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aducret <ambrodu@gmail.com>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/17 20:41:15 by aducret           #+#    #+#             */
/*   Updated: 2023/02/17 21:16:13 by aducret          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FORM_HPP
# define FORM_HPP

# include "Bureaucrat.hpp"

class Form
{
	public:
		Form(std::string name, int gradeToSign, int gradeToExecute);
		Form(Form const & src);
		~Form(void);

		Form & operator=(Form const & rhs);

		std::string const &	getName(void) const;
		bool getSigned(void) const;
		int getGradeToSign(void) const;
		int getGradeToExecute(void) const;

		void beSigned(Bureaucrat const & bureaucrat);
		void signForm(Bureaucrat const & bureaucrat);

		class GradeTooHighException : public std::exception
		{
			public:
				GradeTooHighException(void);
				GradeTooHighException(GradeTooHighException const & src);
				~GradeTooHighException(void) throw();

				GradeTooHighException &	operator=(GradeTooHighException const & rhs);

				virtual const char * what() const throw();
		};

		class GradeTooLowException : public std::exception
		{
			public:
				GradeTooLowException(void);
				GradeTooLowException(GradeTooLowException const & src);
				~GradeTooLowException(void) throw();

				GradeTooLowException & operator=(GradeTooLowException const & rhs);

				virtual const char * what() const throw();
		};

	private:
		std::string const _name;
		bool _signed;
		int const _gradeToSign;
		int const _gradeToExecute;
};

std::ostream &	operator<<(std::ostream & o, Form const & rhs);

#endif