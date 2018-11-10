#pragma once
#include"Enemy.h"
#include<vector>
class Witch:public Enemy
{

protected:
	std::string puzzle;
	std::vector<std::string> Forces; //vector of different forces
	std::vector<std::string> Puzzles;// vector of different puzzles
	int power;

public:
	Witch(std::string p,std::string f,std::vector<std::string> F, std::vector<std::string> P, int pw);

	virtual std::string ReturnForce()=0; //virtual function to return different forces

	virtual std::string ReturnPuzzle()=0; //virtual function to return different puzzles

	virtual int ReturnPower()=0;         //virtual function to return power

	void setForces(std::vector<std::string>F); //set function (Forces)
	std::vector<std::string> getForces()const; //get function (Forces)

	void setPuzzles(std::vector<std::string>P); //set function (Puzzles)
	std::vector<std::string> getPuzzles()const; //get function (Puzzles)

	void setforce(std::string f); //set function (force)
	std::string getforce()const;  //get function (force)

	void setpower(int pw); //set function (power)
	int getpower()const;   //get function (power)

	std::vector<std::string> ReturnForces(); //function to create a vector of Forces

	std::vector<std::string> ReturnPuzzles(); //function to create a vector of Puzzles

	//default constructor
	Witch();
	//default destructor
	~Witch();
};
