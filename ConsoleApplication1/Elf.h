#pragma once
#include<iostream>
#include"Friend.h"
class Elf: public Friend
{
	
public:
	Elf(int pw);

	virtual int ReturnPower();

	void setpower(int pw);
	int getpower()const;
	
	Elf();
	~Elf();
};

