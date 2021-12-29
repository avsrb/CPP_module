#include <iostream>
#include "Bureaucrat.hpp"
#include "Form.hpp"

int	main(void)
{
	{
		try
		{
			Bureaucrat Alex("Alex", 9);
			Form	Doc("Doc", 10,1);
			std::cout << Alex << "\n";
			std::cout << Doc << "\n";
			Doc.beSigned(Alex);
			std::cout << Doc << "\n";

		}
		catch (const Form::GradeTooHighException &e)
		{
			std::cerr << RED << e.what() << DEFAULT << std::endl;
		}
		catch (const Form::GradeTooLowException &e)
		{
			std::cerr << RED << e.what() << DEFAULT << std::endl;
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
			Bureaucrat Anya("Anya", 11);
			Form	Doc("Doc", 10,1);
			std::cout << Anya << "\n";
			std::cout << Doc << "\n";
			Doc.beSigned(Anya);
			std::cout << Doc << "\n";

		}
		catch (const Form::GradeTooHighException &e)
		{
			std::cerr << RED << e.what() << DEFAULT << std::endl;
		}
		catch (const Form::GradeTooLowException &e)
		{
			std::cerr << RED << e.what() << DEFAULT << std::endl;
		}
		catch (...)
		{
			std::cerr << "Something strange happened" << std::endl;
		}
	}
	std::cout << std::endl;

	std::cout << GREEN
	<< "                    _.|._" << std::endl
	<< "                      |" << std::endl
	<< "                     / \\" << std::endl
	<< "                    /   \\" << std::endl
	<< "                   /  o.~\\" << std::endl
	<< "                  !_.~   _!" << std::endl
	<< "                  /      o\\" << std::endl
	<< "                 / J  ~    \\" << std::endl
	<< "                !_      J  _!" << std::endl
	<< "                /   o      ~\\" << std::endl
	<< "               /  J   .~~    \\" << std::endl
	<< "              !_..~~       o _!" << std::endl
	<< "              /  ..       J   \\" << std::endl
	<< "             /  o    ~~..      \\" << std::endl
	<< "            !_      J      ~~.._!" << std::endl
	<< "            /  o       J  ..~~  \\" << std::endl
	<< "           /      ..~~~~~~    o  \\" << std::endl
	<< "          !:::::::::::::::::::::::!" << std::endl
	<< "                  \\______/ " << std::endl;
	return (0);
}


