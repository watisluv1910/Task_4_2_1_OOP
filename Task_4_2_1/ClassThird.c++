#include "ClassThird.h"

ClassThird::ClassThird(string name) : ClassFirst(name) {

	this->name = name + "_3";
}

string ClassThird::getName() {

	return name;
}