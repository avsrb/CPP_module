#ifndef ROBOTOMYREQUESTFORM_HPP
#define ROBOTOMYREQUESTFORM_HPP


#include <ostream>
#include "Form.hpp"

class RobotomyRequestForm : public Form
{
private:
	std::string	_target;
	RobotomyRequestForm();
public:
	virtual	~RobotomyRequestForm();
	RobotomyRequestForm(const std::string target);
	RobotomyRequestForm(const RobotomyRequestForm &R);
	RobotomyRequestForm &operator=(const RobotomyRequestForm &R);


	virtual void execute(const Bureaucrat &executor) const;
	const std::string &getTarget() const;

	friend std::ostream &operator<<(std::ostream &os, const RobotomyRequestForm &form);
};



#endif
