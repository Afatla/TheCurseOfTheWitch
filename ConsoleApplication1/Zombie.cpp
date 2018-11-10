#include "Zombie.h"
using namespace std;

Zombie::Zombie(string f):Enemy(f)
{
	force=f;
}
std::string Zombie::ReturnForce()
{
	force="Zombie";
	return force;
	
}
int Zombie::ZombieCount=0;
Zombie::Zombie()
{
	
}
Zombie::~Zombie()
{
}
