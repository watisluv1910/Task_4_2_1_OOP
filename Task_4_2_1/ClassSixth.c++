#include "ClassSixth.h"

ClassSixth::ClassSixth(string name) : ClassFirst(name), ClassSecond(name), ClassThird(name) {

	this->name = name + "_6";
}

string ClassSixth::getName() {

	return name;
}