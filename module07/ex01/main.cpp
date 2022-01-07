#include "iter.hpp"

template <typename T>
void increment(T &t)
{
	++t;
}


template <typename T>
void	printing(T *t, int len)
{
	for (int i = 0; i < len; ++i)
		std::cout << t[i] << ' ';
	std::cout << std::endl;
}

int main()
{
	char	c[] = {'a', 'b', 'c'};
	int		i[] = {1, 2, 3};
	float	f[] = {1.1, 2.2, 3.3};

	::printing(c, 3);
	::printing(i, 3);
	::printing(f, 3);
	::iter(c, 3, increment);
	::iter(i, 3, increment);
	::iter(f, 3, increment);
	std::cout << std::endl;
	::printing(c, 3);
	::printing(i, 3);
	::printing(f, 3);

	return 0;
}

