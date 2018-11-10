#include "Witch.h"
using namespace std;

Witch::Witch( string p,  string f, vector< string> F,  vector<std::string> P, int pw):Enemy(f)
{
	
	puzzle=p;
	Puzzles=P;
	power=pw;
}
void Witch::setForces( vector< string>F)
{
	Forces=F;
}
 vector< string> Witch:: getForces()const
{
	return Forces;
}
void Witch::setPuzzles( vector< string>P)
{
	Puzzles=P;
}
 vector< string> Witch:: getPuzzles()const
{
	return Puzzles;
}
void Witch::setforce( string f)
{
	force=f;
}
 string Witch:: getforce()const
{
	return force;
}

 vector< string> Witch:: ReturnPuzzles()
{
	Puzzles.push_back("JadisPuzzle.txt");
	Puzzles.push_back("SabrinaPuzzle.txt");
	Puzzles.push_back("TiffanyPuzzle.txt");
	return Puzzles;
}
Witch::Witch()
{
}
Witch::~Witch()
{
}
