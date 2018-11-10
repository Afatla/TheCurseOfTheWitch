#pragma once
#include <iostream>
#include <exception>
class TextException : public std :: exception
{
public:
    const char* what();
	TextException();
	~TextException();
};

