#pragma once
#include "ClassFirst.h"

class ClassFourth : virtual public ClassFirst {

	string name;
public:

	ClassFourth() {};
	ClassFourth(string name);
	string getName() override;
};

