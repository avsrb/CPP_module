#pragma once
#include <string>
#include <iostream>

class WrongAnimal
{
protected:
	WrongAnimal(std::string mType);
	std::string	m_type;
public:
	WrongAnimal();
	~WrongAnimal();
	WrongAnimal(const WrongAnimal &WA);
	WrongAnimal& operator=(const WrongAnimal &WA);
	const std::string getType() const;
	void makeSound() const;
};

