#include <iostream>
#include "ClassEights.h"

using std::cin;
using std::cout;

int main() {

	ClassEights* p_Object = nullptr;

	string name = "";
	cin >> name;

	ClassEights object(name);

	p_Object = &object;

	cout << p_Object->ClassSixth::ClassSecond::ClassFirst::getName() << '\n'
		<< p_Object->ClassSeventh::ClassFourth::ClassFirst::getName() << '\n'
		<< p_Object->ClassSeventh::ClassFifth::ClassFirst::getName() << '\n'
		<< p_Object->ClassSixth::ClassSecond::getName() << '\n'
		<< p_Object->ClassSixth::ClassThird::getName() << '\n'
		<< p_Object->ClassSeventh::ClassFourth::getName() << '\n'
		<< p_Object->ClassSeventh::ClassFifth::getName() << '\n'
		<< p_Object->ClassSixth::getName() << '\n'
		<< p_Object->ClassSeventh::getName() << '\n'
		<< p_Object->getName();

	return 0;
}