#include "Jadis.h"
using namespace std;

Jadis::Jadis( string p, string f,  vector< string> P,  vector< string> F, int pw):Witch(p, f, P, F, pw){}

 string Jadis::ReturnForce()
{
	force =  Forces[0];
	return force;

}
 string Jadis::ReturnPuzzle()
{
	puzzle =  Puzzles[0];
	return puzzle;

}
int Jadis::ReturnPower()
{
	power=110;
	return power;
}
Jadis::Jadis()
{
}
Jadis::~Jadis()
{
}
