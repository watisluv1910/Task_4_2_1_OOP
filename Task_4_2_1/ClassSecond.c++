#include "ClassSecond.h"

ClassSecond::ClassSecond(string name) : ClassFirst(name) {

	this->name = name + "_2";
}

string ClassSecond::getName() {

	return name;
}