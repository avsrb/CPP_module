#ifndef BUREAUCRAT_HPP
#define BUREAUCRAT_HPP
#include <iostream>
#include <string>


# define DEFAULT	"\033[0m"
# define BOLD		"\033[1m"
# define UNDERLINE	"\033[4m"
# define REVERS		"\033[7m"
# define RED		"\033[31m"
# define GREEN		"\033[32m"
# define YELLOW		"\033[33m"
# define BLUE		"\033[34m"
# define AQUA		"\033[36m"

#include "Form.hpp"

class Form;

class Bureaucrat
{
private:
	const std::string	_name;
	int					_grade; // 1..150

public:
	Bureaucrat();
	~Bureaucrat();
	Bureaucrat(const std::string &name, int grade);
	Bureaucrat(const Bureaucrat &other);
	Bureaucrat	&operator=(Bureaucrat const &other);

	const std::string	&getName() const;
	int					getGrade() const;
	void				increment(void);
	void				decrement(void);
	bool				signForm(Form &F);
	

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
	friend std::ostream &operator<<(std::ostream &os, const Bureaucrat &bureaucrat);
};

#endif
