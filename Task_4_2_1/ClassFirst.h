#pragma once
#include <iostream>

using std::string;

class ClassFirst {

	string name;
public:

	ClassFirst() {};
	ClassFirst(string name);
	virtual string getName();
};