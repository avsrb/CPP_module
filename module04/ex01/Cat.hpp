#pragma once
#include "Animal.hpp"

class Cat : public Animal
{
private:

public:
	Cat();
	virtual ~Cat();
	Cat(const Cat &C);
	Cat& operator=(const Cat &C);
	virtual void makeSound() const;
};
