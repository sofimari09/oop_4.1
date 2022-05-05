#pragma once
#include "Progression.h"
#include <cmath>
#include <iostream>

using namespace std;

class Geometric : public Progression
{
	double q = 3;
public:
	double elementoftheprogression(int n) override {
		cout << "Geometricprogression" << endl;
		return (a * (pow(q, n)));
	}
};

