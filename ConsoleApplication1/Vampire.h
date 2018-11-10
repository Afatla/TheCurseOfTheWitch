#pragma once
#include"Enemy.h"
class Vampire:public Enemy
{
	
public:
	Vampire(std::string f);

	virtual std::string ReturnForce();
	static int VampireCount;

	void setforce(std::string f);
	std::string getforce() const;

	Vampire();
	~Vampire();
};

