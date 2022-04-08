#pragma once
#include "ClassSecond.h"
#include "ClassThird.h"

class ClassSixth : public ClassSecond, public ClassThird {

	string name;
public:

	ClassSixth() {};
	ClassSixth(string name);
	string getName() override;
};

