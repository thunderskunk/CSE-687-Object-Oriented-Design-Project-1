#pragma once

// Include all of the built in libraries that will be used here
#include <vector>
#include <array>

// Include all the functions that will be used from the STD namespace here
using std::vector;
using std::array;
using std::cout;
using std::endl;

//=====================================
//============= Map ===================
//=====================================

// initialize the class function Budget here
class Map
{
public:

	Map(int morestuff)
		: stuff(morestuff)
	{}

	void Test();

private:

	int stuff;
};

