#include "Form.hpp"
#include "RobotomyRequestForm.hpp"
#include "ShrubberyCreationForm.hpp"
#include "PresidentialPardonForm.hpp"
#include <stdlib.h>

int		main(void)
{
	Bureaucrat	*test;
	Form		*test2;
	
	try
	{
		test = new Bureaucrat("test", 1);
		//test2 = new RobotomyRequestForm("test");
		//test2 = new ShrubberyCreationForm("test");
		test2 = new PresidentialPardonForm("test");
		test2->beSigned(*test);
		std::cout << *test2;
		//test2->execute(*test);
		test->executeForm(*test2);
	}
	catch (std::exception & e)
	{
		std::cout << "Error: " << e.what() << std::endl;
	}
	delete test;
	delete test2;
	return (0);
}