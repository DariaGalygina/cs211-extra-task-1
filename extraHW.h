#pragma once
#include <iostream>
using namespace std;

const double eps = 0.00001;

//Return the number of seconds later that a time in seconds time_2 is than a time in seconds time_1
double seconds_difference(double, double);
//Return the number of hours later that a time in seconds time_2 is than a time in seconds time_1
double hours_difference(double, double);
//Return the total number of hours in the specified number of hours, minutes, and seconds
double to_float_hours(int, int, int);
//Return the hour as seen on a 24 - hour clock
double to_24_hour_clock(double);
//Determine the hours part of a time in seconds
int get_hours(int);
//Determine the minutes part of a time in seconds
int get_minutes(int);
//Determine the seconds part of a time in seconds
int get_seconds(int);
//Return time at UTC+0, where utc_offset is the number of hours away from UTC + 0
double time_to_utc(int, double);
//Return UTC time in time zone utc_offset
double time_from_utc(int, double);