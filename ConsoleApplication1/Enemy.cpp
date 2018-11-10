#include "Enemy.h"
using namespace std;

Enemy::Enemy(string f)
{
	force=f;
}
void Enemy::setforce(string f)
{
	force=f;
}
string Enemy::getforce() const
{
       return force;
}
Enemy::Enemy()
{
}
Enemy::~Enemy()
{
}
