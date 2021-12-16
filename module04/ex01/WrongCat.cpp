#include "WrongCat.hpp"

WrongCat::WrongCat() : WrongAnimal("WrongCat")
{
	std::cout << "Default constructor called! (WrongCat)" << std::endl;
}

WrongCat::~WrongCat()
{
	std::cout << "Destructor called! (WrongCat)" << std::endl;
}

WrongCat::WrongCat(const WrongCat &WC) : WrongAnimal(WC.m_type)
{
	std::cout << "Copy constructor called! (WrongCat)" << std::endl;
}

WrongCat &WrongCat::operator=(const WrongCat &WC)
{
	if (this == &WC)
		return (*this);
	m_type = WC.m_type;
	return (*this);
}

void WrongCat::makeSound() const
{
	std::cout << "Meeeeeooow!" << std::endl;
}
