#ifndef FORM_HPP
#define FORM_HPP

#include <string>
#include <ostream>
#include "Bureaucrat.hpp"

class Bureaucrat;

class Form
{
private:
	const std::string	_name;
	bool				_signed;
	int					_gradeSigned; // оценка, необходимая для его подписания
	int					_gradeDo; // оценка, необходимая для его выполнения.

protected:
	Form();
	Form(const Form &f);
	Form& operator=(Form const &f);
	Form(const std::string &name, int gradeSigned, int gradeDo);

public:
	virtual ~Form();

	const std::string&	getName() const;
	bool				isSigned() const;
	int					getGradeSigned() const;
	int					getGradeDo() const;
	void 				beSigned(const Bureaucrat &bur);
	virtual void 		execute(const Bureaucrat &executor) const;
	virtual	const std::string &getTarget() const = 0;

	class GradeTooHighException : public std::exception
	{
	private:
		std::string _error;

	public:
		GradeTooHighException(const std::string &error);
		~GradeTooHighException() throw();
		const char *what() const throw();	//Мы должны указать, какие типы ошибок разрешено выдавать этой функции,
		// если оставить пустым, никакие типы ошибок не могут быть выданы из этой функции.
	};

	class GradeTooLowException : public std::exception
	{
	private:
		std::string _error;

	public:
		GradeTooLowException(const std::string &error);
		~GradeTooLowException() throw();
		const char *what() const throw();
	};

	class FormIsNotSignedException
	{
	private:
		std::string _error;
	public:
		FormIsNotSignedException(std::string const &error = "FormIsNotSignedException");
		~FormIsNotSignedException();
		const char *what() const throw();
	};
	friend std::ostream &operator<<(std::ostream &os, const Form &form);
};


#endif
