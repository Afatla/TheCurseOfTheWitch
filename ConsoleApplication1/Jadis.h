#pragma once
#include "Witch.h"
class Jadis:public Witch
{

public:
	Jadis(std::string p, std::string f, std::vector<std::string> P, std::vector<std::string> F, int pw);
	
	virtual std::string ReturnForce();

	virtual std::string ReturnPuzzle();
	
	virtual int ReturnPower();

	Jadis();
	~Jadis();
};

