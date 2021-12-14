#include "Karen.hpp"

int	main(int ac, char **av) {

	if (ac != 2)
	{
		std::cout << "invalid_argument" << std::endl;
		return (0);
	}
	Karen karen;
	karen.complain(av[1]);
	return (0);
}
