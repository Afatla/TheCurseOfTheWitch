#include "Boy.h"
#include"Game.h"
using namespace std;
Boy::Boy( vector< string> A,  string a) : Player(A, a) {}
Boy::Boy()
{
}
 string Boy::ReturnAttacks(int &choice)
{
	Attacks.push_back("BigAnt");
	Attacks.push_back("Vampire");
	if(choice==1) attack = Attacks[0];
	else if(choice==2) attack = Attacks[1];
	return attack;
}
Boy::~Boy()
{
}
