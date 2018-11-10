#include "Girl.h"
using namespace std;

Girl::Girl( vector< string> A,  string a) : Player(A, a) {}
Girl::Girl()
{
}
 string Girl::ReturnAttacks(int &choice)
{
	Attacks.push_back("Reptilian");
	Attacks.push_back("Zombie");
	if(choice==1) attack = Attacks[0];
	else if(choice==2) attack = Attacks[1];
	return attack;
}

Girl::~Girl()
{
}
