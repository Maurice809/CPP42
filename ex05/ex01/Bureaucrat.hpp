/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Bureaucrat.hpp                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aducret <ambrodu@gmail.com>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/16 15:19:04 by aducret           #+#    #+#             */
/*   Updated: 2023/02/17 20:48:38 by aducret          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef BUREAUCRAT_HPP
# define BUREAUCRAT_HPP

# include <iostream>
# include <string>
# include <exception>

class Bureaucrat
{
	public:
		Bureaucrat(std::string name, int grade);
		Bureaucrat(Bureaucrat const & src);
		~Bureaucrat(void);

		Bureaucrat & operator=(Bureaucrat const & rhs);

		std::string getName(void) const;
		int getGrade(void) const;
		void incrementGrade(void);
		void decrementGrade(void);

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

				GradeTooLowException &	operator=(GradeTooLowException const & rhs);

				virtual const char * what() const throw();
		};

	private:
		Bureaucrat(void);

		std::string const _name;
		int _grade;
};

std::ostream & operator<<(std::ostream & o, Bureaucrat const & rhs);

#endif