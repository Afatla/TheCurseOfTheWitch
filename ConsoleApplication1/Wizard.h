#pragma once
#include<iostream>
#include"Friend.h"
class Wizard:public Friend
{
	int power;
    
public:
	Wizard(int pw);

	virtual int ReturnPower();

	void setpower(int pw);
	int getpower()const;
	
	Wizard();
	~Wizard();
};

