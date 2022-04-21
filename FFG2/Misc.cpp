#include "Misc.h"
#include <iostream>


std::string Misc::addName()
{
	std::cout << "ENTER NAME: \n";
	std::string name;
	std::cin >> name;
	return name;
}
