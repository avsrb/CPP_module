#ifndef SHRUBBERYCREATIONFORM_HPP
#define SHRUBBERYCREATIONFORM_HPP

#include <ostream>
#include <fstream>
#include "Bureaucrat.hpp"
#include "Form.hpp"

class ShrubberyCreationForm : public Form
{
private:
	std::string					_target;
	ShrubberyCreationForm();

public:
	virtual ~ShrubberyCreationForm();
	ShrubberyCreationForm(const std::string target);
	ShrubberyCreationForm(const ShrubberyCreationForm &S);
	ShrubberyCreationForm	&operator=(const ShrubberyCreationForm &S);

	virtual void execute(const Bureaucrat &executor) const;
	const std::string &getTarget() const;

	friend std::ostream &operator<<(std::ostream &os, const ShrubberyCreationForm &form);
};


#endif
