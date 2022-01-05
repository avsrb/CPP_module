#include "PresidentialPardonForm.hpp"
#include "RobotomyRequestForm.hpp"
#include "ShrubberyCreationForm.hpp"
#include "Intern.hpp"

int	main(void)
{
	std::cout << std::boolalpha;
	Intern I;
	{
		try
		{
			Bureaucrat B1("bureaucrat_1", 1);
			Form *F1 = I.makeForm("PresidentialPardonForm", "Bender");
			std::cout << B1 << std::endl;
			std::cout << *F1 << std::endl;
			B1.signForm(*F1);
			B1.execute(*F1);
			std::cout << *F1 << std::endl;
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
		catch(const Intern::WrongFormNameException &e)
		{
			std::cerr << RED<< e.what() << DEFAULT << std::endl;
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
			Bureaucrat B1("bureaucrat_1", 1);
			Form *F1 = I.makeForm("Noname", "Bender");
			std::cout << B1 << std::endl;
			std::cout << *F1 << std::endl;
			B1.signForm(*F1);
			B1.execute(*F1);
			std::cout << *F1 << std::endl;
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
		catch(const Intern::WrongFormNameException &e)
		{
			std::cerr << RED<< e.what() << DEFAULT << std::endl;
		}
		catch (...)
		{
			std::cerr << "Something strange happened" << std::endl;
		}
	}
	return 0;
}


