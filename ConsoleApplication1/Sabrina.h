#pragma once
#include "Witch.h"
class Sabrina:public Witch
{

public:
	Sabrina(std::string p,std::string f, std::vector<std::string> P, std::vector<std::string> F, int pw);
	
	virtual std::string ReturnForce();

	virtual std::string ReturnPuzzle();

	virtual int ReturnPower();

	Sabrina();
	~Sabrina();
};

