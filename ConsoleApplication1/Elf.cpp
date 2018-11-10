#include "Elf.h"
using namespace std;

Elf::Elf(int pw):Friend(pw){};
Elf::Elf()
{
}
int Elf::ReturnPower()
{
	power=50;
	return power;
}

Elf::~Elf()
{
}
