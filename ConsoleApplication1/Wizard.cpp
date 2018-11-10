#include "Wizard.h"
using namespace std;

Wizard::Wizard(int pw):Friend(pw){};
int Wizard::ReturnPower()
{
	power=100;
	return power;
}
Wizard::Wizard()
{
}
Wizard::~Wizard()
{
}
