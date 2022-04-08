#pragma once
#include "ClassFirst.h"

class ClassThird : virtual public ClassFirst {

	string name;
public:

	ClassThird() {};
	ClassThird(string name);
	string getName() override;
};

