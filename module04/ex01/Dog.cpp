#include "Dog.hpp"

Dog::Dog() : Animal("Dog"), m_brain(new Brain())
{
	std::cout << "Default constructor called! (Dog)" << std::endl;
}

Dog::~Dog()
{
	std::cout << "Destructor called! (Dog)" << std::endl;
	delete m_brain;
}

Dog::Dog(const Dog &D) : Animal(D.m_type), m_brain(new Brain)
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
