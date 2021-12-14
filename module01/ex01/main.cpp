#include "Zombie.hpp"
#define HORDE_SIZE 10

int main() {
	Zombie	*horde = zombieHorde(HORDE_SIZE, "zombie");

	for (int i = 0; i < HORDE_SIZE; ++i)
		horde[i].announce();
	delete[] horde;
	horde = 0;
}
