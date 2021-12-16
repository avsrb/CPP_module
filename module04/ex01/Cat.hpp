#pragma once
#include "Animal.hpp"

class Cat : public Animal
{
private:
	Brain *m_brain;
public:
	Cat();
	virtual ~Cat();
	Cat(const Cat &C);
	Cat& operator=(const Cat &C);
	virtual void makeSound() const;
};
