#include "Reptilian.h"
using namespace std;

Reptilian::Reptilian(string f ):Enemy(f)
{
	force=f;
};
string Reptilian::ReturnForce()
{
	force="Reptilian";
	return force;
}
int Reptilian::ReptilianCount=0;
Reptilian::Reptilian()
{
	
}
Reptilian::~Reptilian()
{
}
