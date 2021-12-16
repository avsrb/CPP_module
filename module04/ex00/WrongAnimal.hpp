#pragma once
#include <string>
#include <iostream>

class WrongAnimal
{
protected:
	std::string	m_type;
	WrongAnimal(const std::string mType);
public:
	WrongAnimal();
	virtual ~WrongAnimal();
	WrongAnimal(const WrongAnimal &WA);
	WrongAnimal& operator=(const WrongAnimal &WA);
	const std::string &getType() const;
	virtual void makeSound() const;
};

