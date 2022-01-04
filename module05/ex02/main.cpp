#include "PresidentialPardonForm.hpp"
#include "RobotomyRequestForm.hpp"
#include "ShrubberyCreationForm.hpp"
const std::string CYAN = "\x1B[3;96m";
const std::string RESET = "\033[0m";

int	main(void)
{
	Bureaucrat *bureaucrat_1 = new Bureaucrat("bureaucrat_1", 136);
	Bureaucrat *bureaucrat_2 = new Bureaucrat("bureaucrat_2", 44);
	Bureaucrat *bureaucrat_3 = new Bureaucrat("bureaucrat_3", 4);

	Form *form_1 = new ShrubberyCreationForm("ShrubberyCreationForm");
	Form *form_2 = new RobotomyRequestForm("RobotomyRequestForm");
	Form *form_3 = new PresidentialPardonForm("PresidentialPardonForm");

	std::cout << CYAN + "OK TEST" + RESET << std::endl;
	try {
		form_1->beSigned(*bureaucrat_1);
		bureaucrat_1->execute(*form_1);
	} catch (std::exception &exception) {
		std::cout << exception.what() << std::endl;
	}

	try {
		form_2->beSigned(*bureaucrat_2);
		bureaucrat_2->execute(*form_2);
	} catch (std::exception &exception) {
		std::cout << exception.what() << std::endl;
	}

	try {
		form_3->beSigned(*bureaucrat_3);
		bureaucrat_3->execute(*form_3);
	} catch (std::exception &exception) {
		std::cout << exception.what() << std::endl;
	}

	std::cout << CYAN + "TOO SMALL GRADE FOR SIGN" + RESET << std::endl;
	try {
		form_3->beSigned(*bureaucrat_1);
	} catch (std::exception &exception) {
		std::cout << exception.what() << std::endl;
	}

	std::cout << CYAN + "TOO SMALL GRADE FOR EXECUTE" + RESET << std::endl;
	try {
		bureaucrat_1->execute(*form_3);
	} catch (std::exception &exception) {
		std::cout << exception.what() << std::endl;
	}

	delete bureaucrat_1, delete bureaucrat_2, delete bureaucrat_3;
	delete form_1, delete form_2, delete form_3;
	return 0;
}


