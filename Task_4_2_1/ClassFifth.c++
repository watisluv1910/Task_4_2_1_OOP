#include "ClassFifth.h"

ClassFifth::ClassFifth(string name) : ClassFirst(name) {

	this->name = name + "_5";
}

string ClassFifth::getName() {

	return name;
}
