#include "ShrubberyCreationForm.hpp"


ShrubberyCreationForm::ShrubberyCreationForm() :	Form("Default ShrubberyCreationForm", 145, 137), _target("Default ShrubberyCreationForm")
{
}

ShrubberyCreationForm::~ShrubberyCreationForm()
{
}

ShrubberyCreationForm::ShrubberyCreationForm(const std::string target) : Form(target, 145, 137), _target(target)
{
}

ShrubberyCreationForm::ShrubberyCreationForm(const ShrubberyCreationForm &S) : Form(S)
{
	_target = S._target;
}


ShrubberyCreationForm &ShrubberyCreationForm::operator=(const ShrubberyCreationForm &S)
{
	_target = S._target;
	return *this;
}

void ShrubberyCreationForm::execute(const Bureaucrat &executor) const
{
	Form::execute(executor);
	std::ofstream file;

	file.open(_target + "_shrubbery");
	if (!file.fail())
	{
		file
			 << "                    _.|._" << std::endl
			 << "                      |" << std::endl
			 << "                     / \\" << std::endl
			 << "                    /   \\" << std::endl
			 << "                   /  o.~\\" << std::endl
			 << "                  !_.~   _!" << std::endl
			 << "                  /      o\\" << std::endl
			 << "                 / J  ~    \\" << std::endl
			 << "                !_      J  _!" << std::endl
			 << "                /   o      ~\\" << std::endl
			 << "               /  J   .~~    \\" << std::endl
			 << "              !_..~~       o _!" << std::endl
			 << "              /  ..       J   \\" << std::endl
			 << "             /  o    ~~..      \\" << std::endl
			 << "            !_      J      ~~.._!" << std::endl
			 << "            /  o       J  ..~~  \\" << std::endl
			 << "           /      ..~~~~~~    o  \\" << std::endl
			 << "          !:::::::::::::::::::::::!" << std::endl
			 << "                  \\______/ " << std::endl;
	}
}

const std::string &ShrubberyCreationForm::getTarget() const
{
	return _target;
}

std::ostream &operator<<(std::ostream &os, const ShrubberyCreationForm &form)
{
	os << static_cast<const Form &>(form) << " _target: " << form._target;
	return os;
}
