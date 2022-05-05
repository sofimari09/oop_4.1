#pragma once
#include "Progression.h"
#include <iostream>

using namespace std;

class Arithmetic : public Progression
{
	double d = 2;
public:
	double elementoftheprogression(int n) override
	{
		cout << "arithmeticprogression" << endl;
		return (a + n * d);

	}

};

