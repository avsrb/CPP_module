#include "Animal.hpp"

Animal::Animal()
{
	std::cout << "Default constructor called! (Animal)" << std::endl;
}

Animal::~Animal()
{
	std::cout << "Destructor called! (Animal)" << std::endl;
}

Animal::Animal(const Animal &A) : m_type(A.m_type)
{
	std::cout << "Copy constructor called! (Animal)" << std::endl;
}

Animal& Animal::operator=(const Animal &A)
{
	if (this == &A)
		return (*this);
	m_type = A.m_type;
	return (*this);
}

const std::string &Animal::getType() const
{
	return m_type;
}

Animal::Animal(std::string type):	m_type(type)
{
	std::cout << "Constructor with a name called! (Animal)" << std::endl;
}

void Animal::makeSound() const
{
	std::cout << "Make sound..." << std::endl;
}
