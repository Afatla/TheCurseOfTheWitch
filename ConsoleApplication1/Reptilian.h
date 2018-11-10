#pragma once
#include "Enemy.h"
class Reptilian:public Enemy
{
	
public:
	Reptilian();
	Reptilian(std::string f);

	virtual std::string ReturnForce();
	static int ReptilianCount;
	
	void setforce(std::string f);
	std::string getforce() const;

	~Reptilian();
};

