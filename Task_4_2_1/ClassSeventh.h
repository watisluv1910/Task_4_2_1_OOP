#pragma once
#include "ClassFourth.h"
#include "ClassFifth.h"

class ClassSeventh : public ClassFourth, public ClassFifth {

	string name;
public:

	ClassSeventh() {};
	ClassSeventh(string name);
	string getName() override;
};

