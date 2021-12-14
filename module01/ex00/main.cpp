#include "Zombie.hpp"

int main() {
	Zombie	*a = newZombie("Ironman");

	randomChump("Spiderman");
	a->announce();
	delete a;
	return (0);
}
