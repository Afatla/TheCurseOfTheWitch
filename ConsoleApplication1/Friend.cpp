#include "Friend.h"
using namespace std;

Friend::Friend(int pw)
{
	power=pw;
	
}
void Friend::setpower(int pw)
{
	power=pw;
}
int Friend::getpower() const
{
       return power;
}
Friend::Friend()
{
}
Friend::~Friend()
{
}
