#ifndef AMATERIA_HPP
#define AMATERIA_HPP

#include <string>
#include <iostream>
#include "ICharacter.hpp"

class ICharacter;

class AMateria
{
protected:
	std::string	m_type;
public:
	AMateria();
	AMateria& operator=(const AMateria &AM);
	AMateria(std::string const & type);
	AMateria(const AMateria &AM);
	virtual ~AMateria();
	std::string const & getType() const; //Returns the m_materia type
	virtual AMateria* clone() const = 0;
	virtual void use(ICharacter& target) = 0;
};


#endif
