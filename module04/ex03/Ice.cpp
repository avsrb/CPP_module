#include "Ice.hpp"

Ice::Ice() : AMateria("Ice")
{

}

Ice::~Ice()
{

}

Ice::Ice(const Ice &I) : AMateria(I.m_type)
{

}

Ice &Ice::operator=(const Ice &I)
{
	if (this == &I)
		return (*this);
	return (*this)
}

AMateria *Ice::clone() const
{
	AMateria *clone = new
	return ;
}

void Ice::use(ICharacter &target)
{
	std::cout	<<	"* heals "		<< target.getName()
				<<	"'s wounds *"	<< std::endl;
}
