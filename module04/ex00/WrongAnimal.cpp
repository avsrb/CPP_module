#include "WrongAnimal.hpp"

WrongAnimal::WrongAnimal()
{
	std::cout << "Default constructor called! (WrongAnimal)" << std::endl;
}

WrongAnimal::~WrongAnimal()
{
	std::cout << "Destructor called! (WrongAnimal)" << std::endl;
}

WrongAnimal::WrongAnimal(const std::string mType) : m_type(mType)
{
	std::cout << "Constructor with a name called! (WrongAnimal)" << std::endl;
}

WrongAnimal::WrongAnimal(const WrongAnimal &WA) : m_type(WA.m_type)
{
	std::cout << "Copy constructor called! (WrongAnimal)" << std::endl;
}

WrongAnimal &WrongAnimal::operator=(const WrongAnimal &WA)
{
	if (this == &WA)
		return (*this);
	m_type = WA.m_type;
	return (*this);
}

void WrongAnimal::makeSound() const
{
	std::cout << "Make sound..." << std::endl;
}

const std::string &WrongAnimal::getType() const
{
	return m_type;
}

