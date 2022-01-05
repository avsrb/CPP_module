#include "Intern.hpp"

Intern::Intern() {}

Intern::~Intern() {}

Intern::Intern(const Intern &I)
{
	*this = I;
}

Intern &Intern::operator=(const Intern &I)
{
	if (this == &I)
		return *this;
	return *this;
}

Form *Intern::makeForm(const std::string &name, const std::string &target)
{
	Form *F[3] = {
			new ShrubberyCreationForm(target),
			new RobotomyRequestForm(target),
			new PresidentialPardonForm(target)
	};
	for (int i = 0; i < 3; i++)
	{
		if (F[i]->getName() == name)
		{
			std::cout << "Intern creates " << F[i]->getTarget() << std::endl;
			for (int j = 0; j < 3; j++)
			{
				if (j == i)
					continue;
				delete F[j];
			}
			return F[i];
		}
	}
	for (size_t j = 0; j < 3; j++)
		delete F[j];
	throw WrongFormNameException(name);
}

Intern::WrongFormNameException::WrongFormNameException(const std::string &error): _error("WrongFormNameException: " + error)
{

}

Intern::WrongFormNameException::~WrongFormNameException() throw()
{

}

const char *Intern::WrongFormNameException::what() const throw()
{
	return this->_error.c_str();
}
