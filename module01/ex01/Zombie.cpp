#include "Zombie.hpp"

Zombie::Zombie() {
}

Zombie::Zombie(std::string name):	m_name(name) {
}

Zombie::~Zombie() {
	std::cout << m_name << " is dead, good as dead" << std::endl;
}

void	Zombie::setName(std::string name) {
	m_name = name;
}

void	Zombie::announce(void) {
	std::cout << m_name << " BraiiiiiiinnnzzzZ" << std::endl;
}
