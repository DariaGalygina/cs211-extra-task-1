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
	{
		//Task3
		assert(0.25 - to_float_hours(0, 15, 0) < eps);
		assert(2.7525 - to_float_hours(2, 45, 9) < eps);
		assert(1.01 - to_float_hours(1, 0, 36) < eps);
		assert(5.7075 - to_float_hours(5, 42, 27) < eps);
	}
	{
		//Task4
		assert(0 - to_24_hour_clock(24) < eps);
		assert(0 - to_24_hour_clock(48) < eps);
		assert(1 - to_24_hour_clock(25) < eps);
		assert(4 - to_24_hour_clock(4) < eps);
		assert(4.5 - to_24_hour_clock(28.5) < eps);
	}
	{
		//Task5
		assert(get_hours(3800) == 1);
		assert(get_hours(1200) == 0);
		assert(get_hours(14800) == 4);
		assert(get_hours(32950) == 9);
	}
	{
		//Task6
		assert(get_minutes(3800) == 3);
		assert(get_minutes(5900) == 38);
		assert(get_minutes(1270) == 21);
		assert(get_minutes(7360) == 2);
	}
	{
		//Task7
		assert(get_seconds(3800) == 20);
		assert(get_seconds(5640) == 0);
		assert(get_seconds(7300) == 40);
		assert(get_seconds(1335) == 15);
	}

	system("pause");
}