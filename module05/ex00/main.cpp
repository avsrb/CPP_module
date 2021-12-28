#include <string>
//#include <cstdlib>
#include <iostream>
#include "Bureaucrat.hpp"

int	main(void)
{
	try
	{
		Bureaucrat two("Alex", 150);
//		Bureaucrat two1("Alex1", 151);
		std::cout << two << "\n";
		two.increment();
		two.increment();
		two.increment();
		two.decrement();
		two.decrement();
		two.decrement();
		two.decrement();
		two.decrement();
		two.decrement();
		two.decrement();
		two.decrement();


//		Bureaucrat one("One", 1);
//		one.increment();
//		one.decrement();
//		one.decrement();

//		std::cout << bureaucrat << '\n';
//		std::cout << "incrementing: ";
//		bureaucrat.increment();
//		std::cout << bureaucrat << '\n';
//		std::cout << "decrementing: ";
//		bureaucrat.decrement();
//		bureaucrat.decrement();
//		std::cout << bureaucrat << std::endl;
	}
	catch(const Bureaucrat::GradeTooHighException &e)
	{
		std::cerr << e._error << " : " << e.what() << std::endl;
	}
	catch(const Bureaucrat::GradeTooLowException &e)
	{
		std::cerr << e.what() << std::endl;
//		std::cerr << e._error << " : " << e.what() << std::endl;
	}
	catch(...)
	{
		std::cerr << "What the fun is this?" << std::endl;
	}
	return (0);
}

