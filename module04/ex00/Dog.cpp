#include "Dog.hpp"

Dog::Dog()
{
	std::cout << "Default constructor called! (Dog)" << std::endl;
}

Dog::~Dog()
{
	std::cout << "Destructor called! (Dog)" << std::endl;
}

Dog::Dog(const Dog &D) : Animal(D.m_type)
{
	std::cout << "Copy constructor called! (Dog)" << std::endl;
}

Dog &Dog::operator=(const Dog &D)
{
	if (this == &D)
		return (*this);
	m_type = D.m_type;
	return (*this);
}

void Dog::makeSound() const
{
	std::cout << "Gaaaaaaafff!" << std::endl;
}
