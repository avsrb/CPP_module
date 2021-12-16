#include "Cat.hpp"

Cat::Cat() : Animal("Cat")
{
	std::cout << "Default constructor called! (Cat)" << std::endl;
}

Cat::~Cat()
{
	std::cout << "Destructor called! (Cat)" << std::endl;
}

Cat::Cat(const Cat &C) : Animal(C.m_type)
{
	std::cout << "Copy constructor called! (Cat)" << std::endl;
}

Cat &Cat::operator=(const Cat &C)
{
	if (this == &C)
		return (*this);
	m_type = C.m_type;
	return (*this);
}

void Cat::makeSound() const
{
	std::cout << "Meeeeeooow!" << std::endl;
}
