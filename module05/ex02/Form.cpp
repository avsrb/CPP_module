#include "Form.hpp"

Form::Form() : _name("HZ"), _signed(false), _gradeSigned(0), _gradeDo(0)
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

Form::~Form()
{

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
	if (this->_gradeSigned >= bur.getGrade())
	{
		this->_signed = true;
		std::cout << BLUE <<  bur.getName() << " signs " << this->getName() << DEFAULT << std::endl;
	}
	else
	{
		throw Form::GradeTooLowException(std::string(bur.getName() + " cannot sign "
										+ this->getName() + " because below grade" + DEFAULT).c_str());
	}
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
	return (std::string("GradeTooHighException " + this->_error)).c_str();

}

Form::GradeTooLowException::GradeTooLowException(const std::string &error) : _error(error)
{
}

Form::GradeTooLowException::~GradeTooLowException() throw()
{

}

const char *Form::GradeTooLowException::what() const throw()
{
	return (std::string("GradeTooLowException " + this->_error)).c_str();
}

std::ostream &operator<<(std::ostream &os, const Form &form)
{
	os << "_name: " << form._name << " _signed: " << form._signed << " _gradeSigned: " << form._gradeSigned
	   << " _gradeDo: " << form._gradeDo;
	return os;
}
