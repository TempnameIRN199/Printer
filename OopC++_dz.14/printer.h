#pragma once
#include "Header.h"

class Printer
{
private:
	int priority;
	string name;
public:
	Printer();
	Printer(int priority, string name);
	~Printer();
	int getPriority();
	string getName();
	void setPriority(int priority);
	void setName(string name);
};