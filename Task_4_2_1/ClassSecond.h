#pragma once
#include "ClassFirst.h"

class ClassSecond : virtual public ClassFirst {

	string name;
public:

	ClassSecond() {};
	ClassSecond(string name);
	string getName() override;
};

