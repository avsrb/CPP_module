#pragma once
#include <string>
#include <iostream>
#include "Brain.hpp"

class Animal
{
protected:
	Animal(std::string type);
	std::string	m_type;
public:
	Animal();
	virtual ~Animal();
	Animal(const Animal &A);
	Animal& operator=(const Animal &A);
	const std::string	&getType() const;
	virtual void 		makeSound() const;
	void 				getAddr() const;
};


