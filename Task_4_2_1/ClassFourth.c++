#include "ClassFourth.h"

ClassFourth::ClassFourth(string name) : ClassFirst(name) {

	this->name = name + "_4";
}

string ClassFourth::getName() {

	return name;
}