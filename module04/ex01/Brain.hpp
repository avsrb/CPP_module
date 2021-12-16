#pragma once
#include <iostream>

class Brain
{
private:
	std::string	m_ideas[100];
public:
	Brain();
	~Brain();
	Brain(const Brain &B);
	Brain& operator=(const Brain &B);
};

