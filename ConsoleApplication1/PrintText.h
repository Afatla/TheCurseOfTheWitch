#pragma once
#include<iostream>
#include<string>
#include<fstream>
class PrintText
{
public:
	static void LoadText(const std::string &filepath);
	PrintText();
	~PrintText();
};

