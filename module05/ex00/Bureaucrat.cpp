#include "Bureaucrat.hpp"

Bureaucrat::Bureaucrat(const std::string &name, int grade) : _name(name)
{
	if (grade < 1)
		throw
	else if (grade > 150)
		throw
}

Bureaucrat::Bureaucrat()
{
//	std::cout << "Default constructor called! (Bureaucrat)" << std::endl;
}

Bureaucrat::~Bureaucrat()
{
//	std::cout << "Destructor called! (Bureaucrat)" << std::endl;
}

Bureaucrat::Bureaucrat(const Bureaucrat &other)
{
//	std::cout << "Copy constructor called! (Bureaucrat)" << std::endl;
}

Bureaucrat &Bureaucrat::operator=(const Bureaucrat &other)
{
	if (this == &other)
		return (*this);
	const_cast<std::string&>(this->_name) = other.getName();
	this->_grade = other.getGrade();
	return *this;
}


const std::string &Bureaucrat::getName() const
{
	return _name;
}

int Bureaucrat::getGrade() const
{
	return _grade;
}

std::ostream &operator<<(std::ostream &os, const Bureaucrat &bureaucrat)
{
	os << "\033[31m" << bureaucrat._name << " bureaucrat grade \033[32m" << bureaucrat._grade << "\033[0m";
	return os;
}
