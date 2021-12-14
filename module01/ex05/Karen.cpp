#include "Karen.hpp"

void	Karen::debug(void) {
	std::cout	<< "I love to get extra bacon for my "
					"7XL-double-cheese-triple-pickle-special-ketchup "
					"burger. I just love it!" << std::endl;
}
void	Karen::info(void) {
	std::cout	<< "I cannot believe adding extra bacon cost more money. "
					"You don’t put enough! If you did I would not "
					"have to ask for it!" << std::endl;
}
void	Karen::warning(void) {
	std::cout	<< "I think I deserve to have some extra bacon for free. "
					"I’ve been coming here for years and you just "
					"started working here last month." << std::endl;
}
void	Karen::error(void) {
	std::cout	<< "This is unacceptable, "
					"I want to speak to the manager now." << std::endl;
}

void	Karen::complain(std::string level) {
	void	(Karen::*fncPrt[4])(void) = {
		&Karen::debug,
		&Karen::info,
		&Karen::warning,
		&Karen::error
	};
	std::string array[4] = {"debug", "info", "warning", "error"};
	int	i = 0;
	while (i < 4 && level != array[i])
		i++;
	for(int j = i ; j < 4; j++)
	{
		(this->*fncPrt[j])();
		return;
	}
	std::cout << "invalid level" << std::endl;
	return;
}

Karen::Karen() {
}

Karen::~Karen() {
}
