#ifndef FORM_HPP
# define FORM_HPP

# include "Bureaucrat.hpp"

class Bureaucrat;

class Form
{
	public:
		Form(std::string name, int gradeToSign, int gradeToExecute);
		Form(Form const & src);
		virtual ~Form(void);

		Form & operator=(Form const & rhs);

		std::string const &	getName(void) const;
		bool getSigned(void) const;
		int getGradeToSign(void) const;
		int getGradeToExecute(void) const;

		void beSigned(Bureaucrat const & bureaucrat);
		void signForm(Bureaucrat const & bureaucrat);
		virtual void execute(Bureaucrat const & executor) const = 0;

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

		class FormNotSignedException : public std::exception
		{
			public:
				FormNotSignedException(void);
				FormNotSignedException(FormNotSignedException const & src);
				~FormNotSignedException(void) throw();

				FormNotSignedException & operator=(FormNotSignedException const & rhs);

				virtual const char * what() const throw();
		};

		class FileOpenException : public std::exception
		{
			public:
				FileOpenException(void);
				FileOpenException(FileOpenException const & src);
				~FileOpenException(void) throw();

				FileOpenException & operator=(FileOpenException const & rhs);

				virtual const char * what() const throw();
		};

	private:
		//Form(void);
		std::string const _name;
		bool _signed;
		int const _gradeToSign;
		int const _gradeToExecute;
};

std::ostream &	operator<<(std::ostream & o, Form const & rhs);

#endif
