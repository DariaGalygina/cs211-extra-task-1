#include <iostream>
#include <assert.h>
#include "extraHW.h"
using namespace std;

//Return the number of seconds later that a time in seconds time_2 is than a time in seconds time_1
double seconds_difference(double time_1, double time_2)
{
    return time_2 - time_1;
}

//Return the number of hours later that a time in seconds time_2 is than a time in seconds time_1
double hours_difference(double time_1, double time_2)
{
    return seconds_difference(time_1, time_2) / 3600;
}

//Return the total number of hours in the specified number of hours, minutes, and seconds
double to_float_hours(int hours, int minutes, int seconds)
{
    assert(0 <= minutes && minutes < 60 && 0 <= seconds && seconds < 60);
    return hours + minutes / 60.0 + seconds / 3600.0;
}

//Return the hour as seen on a 24 - hour clock
double to_24_hour_clock(double hours)
{
    assert(hours >= 0);
    while (hours > 24.0)
        hours -= 24;
    return hours;
}

//Determine the hours part of a time in seconds
int get_hours(int seconds)
{
    int res = 0;
    assert(seconds >= 0);
    while (seconds > 3600)
    {
        seconds -= 3600;
        res++;
    }
    return res;
}

//Determine the minutes part of a time in seconds
int get_minutes(int seconds)
{
    assert(seconds >= 0);
    while (seconds > 3600)
    {
        seconds -= 3600;
    }
    return seconds / 60;
}

//Determine the seconds part of a time in seconds
int get_seconds(int seconds)
{
    assert(seconds >= 0);
    int m = get_minutes(seconds) * 60;
    while (seconds > 3600)
    {
        seconds -= 3600;
    }
    return seconds - m;
}

//Return time at UTC+0, where utc_offset is the number of hours away from UTC + 0
double time_to_utc(int utc_offset, double time)
{
    double r = time + utc_offset * (-1);
    return ((r) > 24) ? (r - 24) : r;
}

//Return UTC time in time zone utc_offset
double time_from_utc(int utc_offset, double time)
{
    double r = time + utc_offset;
    return ((r) < 0) ? (r + 24) : r;
}