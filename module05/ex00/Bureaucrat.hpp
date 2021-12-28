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

	class GradeTooHighException

	friend std::ostream &operator<<(std::ostream &os, const Bureaucrat &bureaucrat);
};

#endif

//Bureaucrat::GradeTooHighException or a Bureaucrat::GradeTooLowException.
//class A final
//{
//   public:
//      A ();
//      A (const A &a);
//      ~A ();
//      A & operator = (const A &a);
//};