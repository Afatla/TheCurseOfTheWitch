#include "TextException.h"
using namespace std;

TextException::TextException()
{
}

const char* TextException::what()
{ 
	return "Wrong file!";
}
TextException::~TextException()
{
}
