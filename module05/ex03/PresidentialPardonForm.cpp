#include "PresidentialPardonForm.hpp"

PresidentialPardonForm::PresidentialPardonForm() :	Form("Default PresidentialPardonForm", 25, 5), _target("Default PresidentialPardonForm")
{
}

PresidentialPardonForm::~PresidentialPardonForm()
{
}

PresidentialPardonForm::PresidentialPardonForm(const std::string target) : Form("PresidentialPardonForm", 25, 5), _target(target)
{
}

PresidentialPardonForm::PresidentialPardonForm(const PresidentialPardonForm &P) : Form(P)
{
	_target = P._target;
}


PresidentialPardonForm &PresidentialPardonForm::operator=(const PresidentialPardonForm &P)
{
	_target = P._target;
	return *this;
}

void PresidentialPardonForm::execute(const Bureaucrat &executor) const
{
	Form::execute(executor);
	std::cout << _target << " has been pardoned by Zafod Beeblebrox" << std::endl;
}

const std::string &PresidentialPardonForm::getTarget() const
{
	return _target;
}

std::ostream &operator<<(std::ostream &os, const PresidentialPardonForm &form)
{
	os << static_cast<const Form &>(form) << " _target: " << form._target;
	return os;
}
