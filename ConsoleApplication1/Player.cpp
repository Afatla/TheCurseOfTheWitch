#include "Player.h"
#include "BigAnt.h"
using namespace std;
Player::Player( vector< string> A,  string a)
{
	Attacks=A;
	attack=a;

}
Player::Player()
{
}
void Player:: setattack( string a)
{
	attack=a;
}

 string Player::getattack()const
{
	return attack;
}

Player::~Player()
{
}
