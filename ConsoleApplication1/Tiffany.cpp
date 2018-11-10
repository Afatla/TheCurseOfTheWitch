#include "Tiffany.h"
using namespace std;

Tiffany::Tiffany( string p, string f,  vector< string> P,  vector< string> F, int pw):Witch(p, f, P, F, pw){}


 string Tiffany::ReturnForce()
{
	force =  Forces[2];
	return force;
}
 string Tiffany::ReturnPuzzle()
{
	puzzle =   Puzzles[2];
	return puzzle;
}
int Tiffany::ReturnPower()
{
	power=30;
	return power;
}
Tiffany::Tiffany()
{
}
Tiffany::~Tiffany()
{
}
