#include <iostream>

struct Data
{
	int i;
};

uintptr_t serialize(Data* ptr)
{
	return (reinterpret_cast<uintptr_t>(ptr));
}

Data* deserialize(uintptr_t raw)
{
	return (reinterpret_cast<Data*>(raw));
}


int	main()
{
	Data		*d1 = new Data;
	Data		*d2;
	uintptr_t	ptr;

	d1->i = 42;
	std::cout	<<	"d1->d:\t"	<<	d1->i	<< std::endl;
	std::cout	<<	"d1:\t\t"	<<	d1		<< std::endl;
	std::cout	<<	"&d1:\t"	<<	&d1		<< std::endl << std::endl;

	ptr = serialize(d1);
	d2 = deserialize(ptr);

	std::cout	<<	"d2->d:\t"	<<	d2->i	<< std::endl;
	std::cout	<<	"d2:\t\t"	<<	d2		<< std::endl;
	std::cout	<<	"&d2:\t"	<<	&d2		<< std::endl;

	delete d1;
	return (0);
}
