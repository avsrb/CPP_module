#include "Animal.hpp"
#include "Cat.hpp"
#include "Dog.hpp"
#include "WrongAnimal.hpp"
#include "WrongCat.hpp"
#include "Brain.hpp"


int main()
{
	const Animal *Array[10];
	const Dog dog;
	const Cat cat;
	dog.getAddr();
	cat.getAddr();
	for (int i = 0; i < 5; ++i)
	{
		Array[i] = new Dog(dog);
		Array[i]->getAddr();
	}
	for (int i = 5; i < 10; ++i)
	{
		Array[i] = new Cat(cat);
		Array[i]->getAddr();
	}
	for (int i = 0; i < 10; ++i)
	{
		delete Array[i];
	}
	return (0);
}