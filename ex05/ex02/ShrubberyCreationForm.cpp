#include "ShrubberyCreationForm.hpp"
#include <fstream>

ShrubberyCreationForm::ShrubberyCreationForm(std::string target) : Form("ShrubberyCreationForm", 145, 137), _target(target)
{
}

ShrubberyCreationForm::ShrubberyCreationForm(ShrubberyCreationForm const & src) : Form(src), _target(src._target)
{
}

ShrubberyCreationForm::~ShrubberyCreationForm(void)
{
}

ShrubberyCreationForm & ShrubberyCreationForm::operator=(ShrubberyCreationForm const & rhs)
{
	if (this != &rhs)
	{
		this->_target = rhs._target;
	}
	return *this;
}

void ShrubberyCreationForm::execute(Bureaucrat const & executor) const
{
	if (this->getSigned() == false)
		throw Form::FormNotSignedException();
	if (executor.getGrade() > this->getGradeToExecute())
		throw Form::GradeTooLowException();
	std::string filename = this->_target + "_shrubbery";
	std::ofstream file(filename.c_str());
	if (!file.is_open())
		throw Form::FileOpenException();
/*               v .   ._, |_  .,
		   `-._\/  .  \ /    |/_
			   \\  _\, y | \//
		 _\_.___\\, \\/ -.\||
		   `7-,--.`._||  / / ,
		   /'     `-. `./ / |/_.'
					 |    |//
					 |_    /
					 |-   |
					 |   =|
					 |    |
--------------------/ ,  . \--------._ */
	file << "               v .   ._, |_  .," << std::endl;
	file << "		   `-._\\/  .  \\ /    |/_" << std::endl;
	file << "			   \\\\  _\\, y | \\//" << std::endl;
	file << "		 _\\_.___\\\\, \\\\/ -.\\||" << std::endl;
	file << "		   `7-,--.`._||  / / ," << std::endl;
	file << "		   /'     `-. `./ / |/_.'" << std::endl;
	file << "					 |    |//" << std::endl;
	file << "					 |_    /" << std::endl;
	file << "					 |-   |" << std::endl;
	file << "					 |   =|" << std::endl;
	file << "					 |    |" << std::endl;
	file << "--------------------/ ,  . \\--------._" << std::endl;
	file.close();
}