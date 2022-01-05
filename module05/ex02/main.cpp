#include "PresidentialPardonForm.hpp"
#include "RobotomyRequestForm.hpp"
#include "ShrubberyCreationForm.hpp"

int	main(void)
{
	std::cout << std::boolalpha;

	{
		try
		{
			Bureaucrat B1("bureaucrat_1", 135);
			ShrubberyCreationForm F1("ShrubberyCreationForm");
			std::cout << B1 << std::endl;
			std::cout << F1 << std::endl;
			B1.signForm(F1);
			B1.execute(F1);
			std::cout << F1 << std::endl;
		}
		catch (const Bureaucrat::GradeTooHighException &e)
		{
			std::cerr << RED << e.what() << DEFAULT << std::endl;
		}
		catch (const Bureaucrat::GradeTooLowException &e)
		{
			std::cerr << RED << e.what() << DEFAULT << std::endl;
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
			Bureaucrat B1("bureaucrat_2", 145);
			ShrubberyCreationForm F1("ShrubberyCreationForm2");
			std::cout << B1 << std::endl;
			std::cout << F1 << std::endl;
			B1.signForm(F1);
			B1.execute(F1);
			std::cout << F1 << std::endl;
		}
		catch (const Bureaucrat::GradeTooHighException &e)
		{
			std::cerr << RED << e.what() << DEFAULT << std::endl;
		}
		catch (const Bureaucrat::GradeTooLowException &e)
		{
			std::cerr << RED << e.what() << DEFAULT << std::endl;
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
			Bureaucrat B1("bureaucrat_3", 150);
			ShrubberyCreationForm F1("ShrubberyCreationForm3");
			std::cout << B1 << std::endl;
			std::cout << F1 << std::endl;
			B1.signForm(F1);
			B1.execute(F1);
			std::cout << F1 << std::endl;
		}
		catch (const Bureaucrat::GradeTooHighException &e)
		{
			std::cerr << RED << e.what() << DEFAULT << std::endl;
		}
		catch (const Bureaucrat::GradeTooLowException &e)
		{
			std::cerr << RED << e.what() << DEFAULT << std::endl;
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
	std::cout << "\n--------------------------------------------------------\n" << std::endl;

	{
		try
		{
			Bureaucrat B("bureaucrat_1", 45);
			RobotomyRequestForm F("RobotomyRequestForm1");
			std::cout << B << std::endl;
			std::cout << F << std::endl;
			B.signForm(F);
			B.execute(F);
			std::cout << F << std::endl;
		}
		catch (const Bureaucrat::GradeTooHighException &e)
		{
			std::cerr << RED << e.what() << DEFAULT << std::endl;
		}
		catch (const Bureaucrat::GradeTooLowException &e)
		{
			std::cerr << RED << e.what() << DEFAULT << std::endl;
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
			Bureaucrat B("bureaucrat_2", 72);
			RobotomyRequestForm F("RobotomyRequestForm2");
			std::cout << B << std::endl;
			std::cout << F << std::endl;
			B.signForm(F);
			B.execute(F);
			std::cout << F << std::endl;
		}
		catch (const Bureaucrat::GradeTooHighException &e)
		{
			std::cerr << RED << e.what() << DEFAULT << std::endl;
		}
		catch (const Bureaucrat::GradeTooLowException &e)
		{
			std::cerr << RED << e.what() << DEFAULT << std::endl;
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
			Bureaucrat B("bureaucrat_3", 80);
			RobotomyRequestForm F("RobotomyRequestForm3");
			std::cout << B << std::endl;
			std::cout << F << std::endl;
			B.signForm(F);
			B.execute(F);
			std::cout << F << std::endl;
		}
		catch (const Bureaucrat::GradeTooHighException &e)
		{
			std::cerr << RED << e.what() << DEFAULT << std::endl;
		}
		catch (const Bureaucrat::GradeTooLowException &e)
		{
			std::cerr << RED << e.what() << DEFAULT << std::endl;
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
	std::cout << "\n--------------------------------------------------------\n" << std::endl;

	{
		try
		{
			Bureaucrat B("bureaucrat_1", 5);
			PresidentialPardonForm F("PresidentialPardonForm1");
			std::cout << B << std::endl;
			std::cout << F << std::endl;
			B.signForm(F);
			B.execute(F);
			std::cout << F << std::endl;
		}
		catch (const Bureaucrat::GradeTooHighException &e)
		{
			std::cerr << RED << e.what() << DEFAULT << std::endl;
		}
		catch (const Bureaucrat::GradeTooLowException &e)
		{
			std::cerr << RED << e.what() << DEFAULT << std::endl;
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
			Bureaucrat B("bureaucrat_2", 25);
			PresidentialPardonForm F("PresidentialPardonForm2");
			std::cout << B << std::endl;
			std::cout << F << std::endl;
			B.signForm(F);
			B.execute(F);
			std::cout << F << std::endl;
		}
		catch (const Bureaucrat::GradeTooHighException &e)
		{
			std::cerr << RED << e.what() << DEFAULT << std::endl;
		}
		catch (const Bureaucrat::GradeTooLowException &e)
		{
			std::cerr << RED << e.what() << DEFAULT << std::endl;
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
			Bureaucrat B("bureaucrat_3", 30);
			PresidentialPardonForm F("PresidentialPardonForm3");
			std::cout << B << std::endl;
			std::cout << F << std::endl;
			B.signForm(F);
			B.execute(F);
			std::cout << F << std::endl;
		}
		catch (const Bureaucrat::GradeTooHighException &e)
		{
			std::cerr << RED << e.what() << DEFAULT << std::endl;
		}
		catch (const Bureaucrat::GradeTooLowException &e)
		{
			std::cerr << RED << e.what() << DEFAULT << std::endl;
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
	return 0;
}


