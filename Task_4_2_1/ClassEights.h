#pragma once
#include "ClassSixth.h"
#include "ClassSeventh.h"

class ClassEights : public ClassSixth, public ClassSeventh {

	string name;
public:

	ClassEights(string name);
	string getName() override;
};

