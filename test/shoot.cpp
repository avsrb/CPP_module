#include <iostream>

using namespace std;

class Weapon
{
public:
	virtual void Shoot() = 0;
	void	Foo()
	{
		cout << "Foo()" << endl;
	}
};

class Gun : public Weapon
{
public:
	void Shoot() override
	{
		cout << "BANG!" << endl;
	}
};

class SubmachineGun : public Gun
{
public:
	void Shoot() override
	{
		cout << "BANG! BANG! BANG!" << endl;
	}
};

class Bazooka : public Weapon
{
public:
	void Shoot() override
	{
		cout << "BANDBOOM!" << endl;
	}
};

class Knife : public Weapon
{
public:
	void Shoot() override
	{
		cout << "VJUH!" << endl;
	}
};

class Player {
public:
	void Shoot(Weapon *weapon)
	{
		weapon->Shoot();
	}
};


int	main(void)
{
	Gun gun;
	SubmachineGun machineGun;
	Bazooka bazooka;
	Knife	knife;
	Player player;

	player.Shoot(&gun);
	player.Shoot(&machineGun);
	player.Shoot(&bazooka);
	player.Shoot(&knife);
	knife.Foo();

	return 0;

}