#include "ClassSeventh.h"

ClassSeventh::ClassSeventh(string name) : ClassFirst(name), ClassFourth(name), ClassFifth(name) {

	this->name = name + "_7";
}

string ClassSeventh::getName() {

	return name;
}
