#include "Dog.hpp"

Dog::Dog() : Animal("Dog"), m_brain(new Brain())
{
	std::cout << "Default constructor called! (Dog)" << std::endl;
}

Dog::~Dog()
{
	delete m_brain;
	std::cout << "Destructor called! (Dog)" << std::endl;
}

Dog::Dog(const Dog &D) : Animal(D.m_type), m_brain(new Brain(*D.m_brain))
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

void	Dog::getAddr() const
{
	std::cout << this << std::endl;
}