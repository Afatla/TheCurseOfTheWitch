#include "Sabrina.h"
using namespace std;

Sabrina::Sabrina( string p, string f,  vector< string> P,  vector< string> F, int pw):Witch(p, f, P, F, pw){}

 string Sabrina::ReturnForce()
{
	force =  Forces[1];
	return force;

}
 string Sabrina::ReturnPuzzle()
{
	puzzle = Puzzles[1];
	return puzzle;
}
int Sabrina::ReturnPower()
{
	power=50;
	return power;
}
Sabrina::Sabrina()
{
}
Sabrina::~Sabrina()
{
}
