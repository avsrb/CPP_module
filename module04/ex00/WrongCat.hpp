#pragma once
#include "WrongAnimal.hpp"

class WrongCat : public WrongAnimal
{
private:

public:
	WrongCat();
	~WrongCat();
	WrongCat(const WrongCat &WC);
	WrongCat& operator=(const WrongCat &WC);
	void makeSound() const;
};


