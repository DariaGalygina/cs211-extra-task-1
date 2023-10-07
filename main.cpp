#include <iostream>
#include <assert.h>
#include "extraHW.h"
using namespace std;

int main()
{
	setlocale(LC_ALL, "RUSSIAN");

	{
		//Task1
		assert(1800.0 - seconds_difference(1800.0, 3600.0) < eps);
		assert(-1800.0 - seconds_difference(1800.0, 3600.0) < eps);
		assert(360.0 - seconds_difference(1800.0, 2160.0) < eps);
		assert(0.0 - seconds_difference(1800.0, 1800.0) < eps);
	}
	{
		//Task2
		assert(0.5 - hours_difference(1800.0, 3600.0) < eps);
		assert(-0.5 - hours_difference(3600.0, 1800.0) < eps);
		assert(0.1 - hours_difference(1800.0, 2160.0) < eps);
		assert(0.0 - hours_difference(1800.0, 1800.0) < eps);
	}

	system("pause");
}