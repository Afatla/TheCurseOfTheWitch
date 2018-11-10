#pragma once
#include"Enemy.h"
class Zombie:public Enemy
{
	
public:
	Zombie(std::string f);

	virtual std::string ReturnForce();
	static int ZombieCount;

	void setforce(std::string f);
	std::string getforce() const;

	Zombie();
	~Zombie();
};

