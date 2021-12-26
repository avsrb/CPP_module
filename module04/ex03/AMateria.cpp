#include "AMateria.hpp"

AMateria::AMateria(std::string const & type) : m_type(type)
{
//	std::cout << "Default constructor with type: "<< m_type <<"! (AMateria)" << std::endl;
}

AMateria::~AMateria()
{
//	std::cout << "Destructor called "<< m_type <<"! (Animal)" << std::endl;
}

std::string const &AMateria::getType() const {
	return m_type;
}

void AMateria::use(ICharacter &target)
{

}


