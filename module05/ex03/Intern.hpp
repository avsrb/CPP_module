#ifndef INTERN_HPP
#define INTERN_HPP

#include "PresidentialPardonForm.hpp"
#include "RobotomyRequestForm.hpp"
#include "ShrubberyCreationForm.hpp"
#include "Form.hpp"

class Intern
{
public:
	Intern();
	Intern(const Intern &I);
	virtual ~Intern();
	Intern	&operator=(const Intern &I);
	Form*	makeForm(const std::string &name, const std::string &target);

	class WrongFormNameException : public std::exception
	{
	private:
		std::string _error;

	public:
		WrongFormNameException(const std::string &error);
		~WrongFormNameException() throw();
		const char *what() const throw();
	};
};


#endif
