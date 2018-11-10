#include "BigAnt.h"
using namespace std;

BigAnt::BigAnt( string f):Enemy(f)
{
	force=f;
};
BigAnt::BigAnt()
{

}
int BigAnt::BigAntCount=0;
string BigAnt::ReturnForce()
{
	force="BigAnt";
	return force;
}
BigAnt::~BigAnt()
{
}
