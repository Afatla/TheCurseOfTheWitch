#pragma once
#include"Player.h"
#include<iostream>
class Girl:public Player
{

public:
	
	Girl(std::vector<std::string> A, std::string a);

	virtual std::string ReturnAttacks(int &choice);

	Girl();
	~Girl();
};

