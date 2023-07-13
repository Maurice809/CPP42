#include "RobotomyRequestForm.hpp"
#include <exception>
#include <stdlib.h>

RobotomyRequestForm::RobotomyRequestForm(std::string target) : Form("RobotomyRequestForm", 72, 45), _target(target)
{
}

RobotomyRequestForm::RobotomyRequestForm(RobotomyRequestForm const & src) : Form(src), _target(src._target)
{
}

RobotomyRequestForm::~RobotomyRequestForm(void)
{
}

RobotomyRequestForm & RobotomyRequestForm::operator=(RobotomyRequestForm const & rhs)
{
	(void)rhs;
	return *this;
}

void RobotomyRequestForm::execute(Bureaucrat const & executor) const
{
	if (this->getSigned() == false)
		throw Form::FormNotSignedException();
	if (executor.getGrade() > this->getGradeToExecute())
		throw Form::GradeTooLowException();
	srand(time(NULL));
	if (rand() % 2)
		std::cout << "Brrrrrrr... The robotomy of " << this->_target << " was a success!" << std::endl;
	else
		std::cout << "Brrrrrrr... The robotomy of " << this->_target << " failed!" << std::endl;
}