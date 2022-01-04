#include "Bureaucrat.hpp"

Bureaucrat::Bureaucrat(const std::string &name, int grade) : _name(name), _grade(grade)
{
	if (grade < 1)
		throw GradeTooHighException("constructor error");
	else if (grade > 150)
		throw GradeTooLowException("constructor error");
}

Bureaucrat::Bureaucrat()
{
}

Bureaucrat::~Bureaucrat()
{
}

Bureaucrat::Bureaucrat(const Bureaucrat &other) : _name(other.getName()), _grade(other.getGrade())
{
}

Bureaucrat &Bureaucrat::operator=(const Bureaucrat &other)
{
	if (this == &other)
		return (*this);
	const_cast<std::string&>(this->_name) = other.getName();
	this->_grade = other.getGrade();
	return (*this);
}

const std::string &Bureaucrat::getName() const
{
	return _name;
}

int Bureaucrat::getGrade() const
{
	return _grade;
}

void Bureaucrat::increment(void)
{
	std::cout << _name + ": increment" << std::endl;
	if (_grade == 1)
		throw Bureaucrat::GradeTooHighException("Bureaucrat " +_name + " increment error");
	_grade--;
}

void Bureaucrat::decrement(void)
{
	std::cout << _name + ": decrement" << std::endl;
	if (_grade == 150)
		throw Bureaucrat::GradeTooLowException("Bureaucrat " +_name + " decrement error");
	_grade++;

}

std::ostream &operator<<(std::ostream &os, const Bureaucrat &bureaucrat)
{
	os << "Bureaucrat " << bureaucrat._name << " is his grade " << bureaucrat._grade;
	return os;
}

Bureaucrat::GradeTooHighException::GradeTooHighException(const std::string &error) : _error(error)
{
}

Bureaucrat::GradeTooHighException::~GradeTooHighException() throw()
{
}

Bureaucrat::GradeTooLowException::GradeTooLowException(const std::string &error) : _error(error)
{
}

Bureaucrat::GradeTooLowException::~GradeTooLowException() throw()
{
}

const char *Bureaucrat::GradeTooHighException::what() const throw()
{
	return this->_error.c_str();
}

const char *Bureaucrat::GradeTooLowException::what() const throw()
{
	return this->_error.c_str();
}

bool Bureaucrat::signForm(Form &F) const
{
	try
	{
		F.beSigned(*this);
		std::cout << BLUE <<  this->getName() << " signs " << F.getName() << DEFAULT << std::endl;
	}
	catch (const Form::GradeTooLowException &e)
	{
		std::cout << RED << this->getName() + " cannot sign " + F.getName() + " because below grade" + DEFAULT << std::endl;
		return true;
	}
	return false;
}

bool Bureaucrat::execute(const Form &form)
{
	try
	{
		form.execute(*this);
		std::cout << _name << " executes " << form.getName() << std::endl;
	}
	catch (const Form::GradeTooLowException &e)
	{
		std::cout << _name << " cannot execute " << form.getName() << " because " << e.what() << std::endl;
		return true;
	}
	catch (const Form::FormIsNotSignedException &e)
	{
		std::cout << _name << " cannot execute " << form.getName() << " because " << e.what() << std::endl;
		return true;
	}
	return false;
}
