#ifndef BUREAUCRAT_HPP
#define BUREAUCRAT_HPP
#include <iostream>
#include <string>

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
	friend std::ostream &operator<<(std::ostream &os, const Bureaucrat &bureaucrat);
};

#endif
