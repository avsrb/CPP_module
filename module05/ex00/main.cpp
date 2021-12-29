#include <iostream>
#include "Bureaucrat.hpp"

int	main(void)
{
	try
	{
		Bureaucrat Alex("Alex", 150);
		std::cout << Alex << "\n";
//		Alex.increment();
//		Alex.increment();
//		Alex.increment();
		Alex.decrement();
		Alex.decrement();
		Alex.decrement();
		std::cout << Alex << "\n";

	}
	catch(const Bureaucrat::GradeTooHighException &e)
	{
		std::cerr << e._error << " : " << e.what() << std::endl;
	}
	catch(const Bureaucrat::GradeTooLowException &e)
	{
		std::cerr << e.what() << std::endl;
	}
	catch(...)
	{
		std::cerr << "What the fun is this?" << std::endl;
	}
	return (0);
}

