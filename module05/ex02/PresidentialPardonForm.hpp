#ifndef PRESIDENTIALPARDONFORM_HPP
#define PRESIDENTIALPARDONFORM_HPP

#include <ostream>
#include "Form.hpp"

class PresidentialPardonForm : public Form
{
private:
	std::string					_target;
	PresidentialPardonForm();

public:
	virtual ~PresidentialPardonForm();
	PresidentialPardonForm(const std::string target);
	PresidentialPardonForm(const PresidentialPardonForm &P);
	PresidentialPardonForm	&operator=(const PresidentialPardonForm &P);

	virtual void execute(const Bureaucrat &executor) const;
	const std::string &getTarget() const;

	friend std::ostream &operator<<(std::ostream &os, const PresidentialPardonForm &form);
};


#endif
