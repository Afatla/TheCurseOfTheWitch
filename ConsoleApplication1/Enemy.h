#pragma once
#include <iostream>

class Enemy
{
protected:
	std::string force;
public:
	//constructor
	Enemy(std::string f);

	virtual std::string ReturnForce()=0; //virtual function to return force

	void setforce(std::string f); //set function (force)
	std::string getforce() const; //get function (force)

	//default constructor
	Enemy();
	//default destructor
	~Enemy();
};

