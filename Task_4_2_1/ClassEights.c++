#include "ClassEights.h"

ClassEights::ClassEights(string name) : ClassFirst(name), ClassSixth(name), ClassSeventh(name) {

	this->name = name + "_8";
}

string ClassEights::getName() {

	return name;
}