#pragma once
#include "ClassFirst.h"

class ClassFifth : virtual public ClassFirst {

	string name;
public:

	ClassFifth() {};
	ClassFifth(string name);
	string getName() override;
};

