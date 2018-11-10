#pragma once
#include"Player.h"
#include <string>
class Boy:public Player
{

public:
	
	Boy(std::vector<std::string> A, std::string a);
	virtual std::string ReturnAttacks(int &choice);
	Boy();
	~Boy();
};

