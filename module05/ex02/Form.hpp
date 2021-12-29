#ifndef FORM_HPP
#define FORM_HPP

#include <string>
#include <ostream>
#include "Bureaucrat.hpp"

class Form
{
private:
	const std::string	_name;
	bool				_signed;
	int					_gradeSigned; // оценка, необходимая для его подписания
	int					_gradeDo; // оценка, необходимая для его выполнения.

public:
	Form();
	Form(const std::string &name, int gradeSigned, int gradeDo);
	Form(Form const &f);
	~Form();

	Form	&operator=(Form const &f);

	const std::string&	getName() const;
	bool				isSigned() const;
	int					getGradeSigned() const;
	int					getGradeDo() const;
	void 				beSigned(const Bureaucrat &bur);

	friend std::ostream &operator<<(std::ostream &os, const Form &form);

	class GradeTooHighException : public std::exception
	{
	private:

	public:
		std::string _error;
		GradeTooHighException(const std::string &error);
		~GradeTooHighException() throw();
		const char *what() const throw();	//Мы должны указать, какие типы ошибок разрешено выдавать этой функции,
		// если оставить пустым, никакие типы ошибок не могут быть выданы из этой функции.

	};

	class GradeTooLowException : public std::exception
	{
	private:

	public:
		std::string _error;
		GradeTooLowException(const std::string &error);
		~GradeTooLowException() throw();

		const char *what() const throw();
	};
};


#endif
