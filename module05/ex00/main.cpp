#include <iostream>
#include "Bureaucrat.hpp"

int	main(void)
{
	{
		try
		{
			Bureaucrat Alex("Alex", 150);
			std::cout << Alex << "\n";
			Alex.decrement();
			Alex.decrement();
			Alex.decrement();
			std::cout << Alex << "\n";
		}
		catch (const Bureaucrat::GradeTooHighException &e)
		{
			std::cerr << e._error << " : " << e.what() << std::endl;
		}
		catch (const Bureaucrat::GradeTooLowException &e)
		{
			std::cerr << e.what() << std::endl;
		}
		catch (...)
		{
			std::cerr << "Something strange happened" << std::endl;
		}
	}
	std::cout << std::endl;
	{
		try
		{
			Bureaucrat Vasya("Vasya", 150);
			std::cout << Vasya << "\n";
			Vasya.increment();
			Vasya.increment();
			Vasya.increment();
			std::cout << Vasya << "\n";
		}
		catch (const Bureaucrat::GradeTooHighException &e)
		{
			std::cerr << e._error << " : " << e.what() << std::endl;
		}
		catch (const Bureaucrat::GradeTooLowException &e)
		{
			std::cerr << e.what() << std::endl;
		}
		catch (...)
		{
			std::cerr << "Something strange happened" << std::endl;
		}
	}
	std::cout << std::endl;
	{
		try
		{
			Bureaucrat Anya("Anya", 1);
			std::cout << Anya << std::endl;
			Anya.increment();
			Anya.increment();
			Anya.increment();
			std::cout << Anya << "\n";
		}
		catch (const Bureaucrat::GradeTooHighException &e)
		{
			std::cerr << e.what() << std::endl;
		}
		catch (const Bureaucrat::GradeTooLowException &e)
		{
			std::cerr << e.what() << std::endl;
		}
		catch (...)
		{
			std::cerr << "Something strange happened" << std::endl;
		}
	}
	std::cout << std::endl;
	{
		try
		{
			Bureaucrat Anya("Anya", 1);
			std::cout << Anya << "\n";
			Anya.decrement();
			Anya.decrement();
			Anya.decrement();
			std::cout << Anya << "\n";
		}
		catch (const Bureaucrat::GradeTooHighException &e)
		{
			std::cerr << e._error << " : " << e.what() << std::endl;
		}
		catch (const Bureaucrat::GradeTooLowException &e)
		{
			std::cerr << e.what() << std::endl;
		}
		catch (...)
		{
			std::cerr << "Something strange happened" << std::endl;
		}
	}

	return (0);
}

