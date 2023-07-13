#include "Intern.hpp"

Intern::Intern(void)
{
}

Intern::Intern(Intern const & src)
{
    *this = src;
}

Intern::~Intern(void)
{
}

Intern &	Intern::operator=(Intern const & rhs)
{
    (void)rhs;
    return (*this);
}

Form *		Intern::makeForm(std::string formName, std::string target)
{
    if (formName == "robotomy request")
    {
        std::cout << "Intern creates " << formName << std::endl;
        return (new RobotomyRequestForm(target));
    }
    else if (formName == "shrubbery creation")
    {
        std::cout << "Intern creates " << formName << std::endl;
        return (new ShrubberyCreationForm(target));
    }
    else if (formName == "presidential pardon")
    {
        std::cout << "Intern creates " << formName << std::endl;
        return (new PresidentialPardonForm(target));
    }
    else
        throw Intern::UnknownFormException();
}

Intern::UnknownFormException::UnknownFormException(void)
{
}

Intern::UnknownFormException::UnknownFormException(UnknownFormException const & src)
{
    *this = src;
}

Intern::UnknownFormException::~UnknownFormException(void) throw()
{
}

Intern::UnknownFormException &	Intern::UnknownFormException::operator=(UnknownFormException const & rhs)
{
    (void)rhs;
    return (*this);
}

const char *	Intern::UnknownFormException::what() const throw()
{
    return ("Unknown form");
}
