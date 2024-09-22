#include "Zombie.hpp"

int main() {
	int N = 5;
	Zombie *z1 = NULL;

	z1 = zombieHorde(5, "Samson");
	for(int i = 0; i < N; i++)
		z1[i].announce();

	delete[] z1;
	return (0);
}

