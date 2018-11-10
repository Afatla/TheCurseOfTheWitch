#include "Vampire.h"
using namespace std;

Vampire::Vampire(string f)
{
	force=f;
	
}

string Vampire::ReturnForce()
{
	force="Vampire";
	return force;
}
int Vampire::VampireCount=0;
Vampire::Vampire()
{
}
Vampire::~Vampire()
{
}
