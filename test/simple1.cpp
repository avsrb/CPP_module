#include <iostream>
#include "Simple1.hpp"

Sample1::Sample1(char p1, int p2, float p3)
{
	std::cout << "Constructor called" << std::endl;

	this->a1 = p1;
	std::cout << "this->a = " << this->a1 << std::endl;
	this->a2 = p2;
	std::cout << "this->a = " << this->a1 << std::endl;
	this->a3 = p3;
	std::cout << "this->a = " << this->a1 << std::endl;

	return;
}

Sample1::~Sample1(void)
{
	std::cout << "Destructor called" << std::endl;
	return;
}
