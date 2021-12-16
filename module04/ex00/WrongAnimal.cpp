#include "WrongAnimal.hpp"

WrongAnimal::WrongAnimal()
{
	std::cout << "Default constructor called! (WrongAnimal)" << std::endl;
}

WrongAnimal::~WrongAnimal()
{
	std::cout << "Destructor called! (WrongAnimal)" << std::endl;
}

WrongAnimal::WrongAnimal(const WrongAnimal &A):	m_type(A.m_type)
{
	std::cout << "Copy constructor called! (WrongAnimal)" << std::endl;
}

WrongAnimal::WrongAnimal(std::string mType):	m_type(mType)
{
	std::cout << "Constructor with a name called! (WrongAnimal)" << std::endl;
}

WrongAnimal& WrongAnimal::operator=(const WrongAnimal &A)
{
	if (this == &A)
		return (*this);
	m_type = A.m_type;
	return (*this);
}

const std::string WrongAnimal::getType() const
{
	return (m_type);
}

void WrongAnimal::makeSound() const
{
	std::cout << "Make sound..." << std::endl;
}

