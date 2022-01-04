#include "RobotomyRequestForm.hpp"

RobotomyRequestForm::RobotomyRequestForm() :	Form("Default RobotomyRequestForm", 72, 45), _target("Default ShrubberyCreationForm")
{
}

RobotomyRequestForm::~RobotomyRequestForm()
{
}

RobotomyRequestForm::RobotomyRequestForm(const std::string target) : Form("RobotomyRequestForm", 72, 45), _target(target)
{
}

RobotomyRequestForm::RobotomyRequestForm(const RobotomyRequestForm &R) : Form(R)
{
	_target = R._target;
}


RobotomyRequestForm &RobotomyRequestForm::operator=(const RobotomyRequestForm &R)
{
	_target = R._target;
	return *this;
}

void RobotomyRequestForm::execute(const Bureaucrat &executor) const
{
	Form::execute(executor);
	std::cout << "Makes some drilling noises" << std::endl;
	if ((rand() % 100 > 50))
		std::cout << _target<< " has been robotomized successfully" << std::endl;
	else
		std::cout << "something went wrong..." << std::endl;
}

const std::string &RobotomyRequestForm::getTarget() const
{
	return _target;
}

std::ostream &operator<<(std::ostream &os, const RobotomyRequestForm &form)
{
	os << static_cast<const Form &>(form) << " _target: " << form._target;
	return os;
}
