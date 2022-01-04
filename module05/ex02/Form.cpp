#include "Form.hpp"

Form::Form()
{}

Form::~Form()
{}

Form::Form(const std::string &name, int gradeSigned, int gradeDo) : _name(name)
{
	if (gradeSigned > 150 || gradeDo > 150)
		throw Form::GradeTooLowException(this->_name + " Constructor error");
	else if (gradeSigned < 1 || gradeDo < 1)
		throw Form::GradeTooHighException(this->_name + " Constructor error");
	_gradeSigned = gradeSigned;
	_gradeDo = gradeDo;
	_signed = false;
}

Form::Form(const Form &f)
{
	*this = f;
}

const std::string &Form::getName() const
{
	return _name;
}

bool Form::isSigned() const
{
	return _signed;
}

int Form::getGradeSigned() const
{
	return _gradeSigned;
}

int Form::getGradeDo() const
{
	return _gradeDo;
}

void Form::beSigned(const Bureaucrat &bur)
{
	if (bur.getGrade() > this->_gradeSigned)
	{
		throw Form::GradeTooLowException(std::string(bur.getName() + " cannot sign "
													 + this->getName() + " because below grade" + DEFAULT).c_str());
	}
	_signed = true;
}

Form &Form::operator=(const Form &f)
{
	if (this == &f)
		return (*this);
	const_cast<std::string&>(_name) = f.getName();
	_signed = f.isSigned();
	_gradeDo = f.getGradeDo();
	_gradeSigned = f.getGradeSigned();
	return (*this);
}

Form::GradeTooHighException::GradeTooHighException(const std::string &error) : _error(error)
{
}

Form::GradeTooHighException::~GradeTooHighException() throw()
{
}

const char *Form::GradeTooHighException::what() const throw()
{
	return this->_error.c_str();
}

Form::GradeTooLowException::GradeTooLowException(const std::string &error) : _error(error)
{
}

Form::GradeTooLowException::~GradeTooLowException() throw()
{

}

const char *Form::GradeTooLowException::what() const throw()
{
	return this->_error.c_str();
}

std::ostream &operator<<(std::ostream &os, const Form &form)
{
	os << "_name: " << form._name << " _signed: "  << (form._signed ? GREEN : RED) << form._signed << DEFAULT << " _gradeSigned: " << form._gradeSigned
	   << " _gradeDo: " << form._gradeDo;
	return os;
}

void	Form::execute(const Bureaucrat &executor) const
{
//	if (_signed == false)
//		throw Form::FormIsNotSignedException();
//	else
//	{
//		if (executor.getGrade() > _gradeDo)
//			throw Form::GradeTooLowException("below grade");
//		else
//		{
//			std::cout << executor.getName() << " execute " << _name << std::endl;
//		}
//	}
	if (executor.getGrade() > _gradeDo)
		throw Bureaucrat::GradeTooLowException("below grade");
	else if (!_signed)
		throw FormIsNotSignedException();
}

const char *Form::FormIsNotSignedException::what() const throw()
{
	return this->_error.c_str();
}

Form::FormIsNotSignedException::FormIsNotSignedException(std::string const &error) : _error(error)
{

}
Form::FormIsNotSignedException::~FormIsNotSignedException()
{
}