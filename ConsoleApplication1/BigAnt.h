#pragma once
#include "Enemy.h"
class BigAnt:public Enemy
{
	
public:

	BigAnt(std::string f);

	virtual std::string ReturnForce();
	static int BigAntCount;

	void setforce(std::string f);
	std::string getforce() const;

	BigAnt();
	~BigAnt();
};

