#pragma once
#include<iostream>
#include<vector>

class Friend
{
protected:
	int power;
public:
	//constructor
	Friend(int pw);

	virtual int ReturnPower()=0; //virtual function to return power

	void setpower(int pw); //set function (power)
	int getpower() const; //get function (power)

	//default constructor
	Friend();
	//default destructor
	~Friend();
};

