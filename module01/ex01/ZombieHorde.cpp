#include "Zombie.hpp"

Zombie*		zombieHorde(int N, std::string name) {
	Zombie	*horde;

	if (N > 0) {
		horde = new Zombie[N];
		for (int i = 0; i < N; ++i)
			horde[i].setName(name);
		return (horde);
	}
	return (NULL);
}
