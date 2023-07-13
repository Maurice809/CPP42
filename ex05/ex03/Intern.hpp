#ifndef INTERN_HPP
# define INTERN_HPP

# include <iostream>
# include "RobotomyRequestForm.hpp"
# include "ShrubberyCreationForm.hpp"
# include "PresidentialPardonForm.hpp"

class Form;

class Intern
{
    public:
        Intern(void);
        Intern(Intern const & src);
        ~Intern(void);

        Intern &	operator=(Intern const & rhs);

        Form *		makeForm(std::string formName, std::string target);

        class UnknownFormException : public std::exception
        {
            public:
                UnknownFormException(void);
                UnknownFormException(UnknownFormException const & src);
                ~UnknownFormException(void) throw();

                UnknownFormException &	operator=(UnknownFormException const & rhs);

                virtual const char * what() const throw();
        };
};

#endif