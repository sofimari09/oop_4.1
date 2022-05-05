#include "Progression.h"
#include "Geometric.h"
#include "Arithmetic.h"
#include <iostream>
using namespace std;

int main() {
	Progression* pr[2];
	pr[0] = new Geometric();
	pr[1] = new Arithmetic();
	cout << pr[0]->elementoftheprogression(2) << endl;
	cout << pr[1]->elementoftheprogression(3);
};
