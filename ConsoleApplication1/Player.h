#pragma once
#include<vector>
#include<iostream>
#include<fstream>
#include<string>


class Player
{
protected:
	std::vector<std::string> Attacks; //vector with available attacks
	std::string attack;               
public:
	
	void setattack(std::string a);   //set function (attack)
	std::string getattack()const;    //get function (attack)

	virtual std::string ReturnAttacks(int &choice)=0; //virtual function to choose an attack

	//default constructor
	Player();
	//constructor
	Player(std::vector<std::string> A, std::string a);
	//default destructor
	~Player();
};

