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

/*
    Implement three functions
        * get_hours
        * get_minutes
        * get_seconds
    They are used to determine the hours part, minutes part and seconds part 
    of a time in seconds. E.g.:

    >>> get_hours(3800)
    1

    >>> get_minutes(3800)
    3

    >>> get_seconds(3800)
    20

    In other words, if 3800 seconds have elapsed since midnight, 
    it is currently 01:03:20 (hh:mm:ss).
*/

double time_to_utc(int utc_offset, double time)
{
    return 0;
    /*
        Return time at UTC+0, where utc_offset is the number of hours away from
        UTC+0.
        You may be interested in:
        https://en.wikipedia.org/wiki/Coordinated_Universal_Time

        >>> time_to_utc(+0, 12.0)
        12.0
 
        >>> time_to_utc(+1, 12.0)
        11.0
 
        >>> time_to_utc(-1, 12.0)
        13.0
 
        >>> time_to_utc(-11, 18.0)
        5.0
 
        >>> time_to_utc(-1, 0.0)
        1.0
 
        >>> time_to_utc(-1, 23.0)
        0.0
    */
}

double time_from_utc(int utc_offset, double time)
{
    return 0;
    /*
        Return UTC time in time zone utc_offset.

        >>> time_from_utc(+0, 12.0)
        12.0
 
        >>> time_from_utc(+1, 12.0)
        13.0
 
        >>> time_from_utc(-1, 12.0)
        11.0
 
        >>> time_from_utc(+6, 6.0)
        12.0
 
        >>> time_from_utc(-7, 6.0)
        23.0
 
        >>> time_from_utc(-1, 0.0)
        23.0
 
        >>> time_from_utc(-1, 23.0)
        22.0
 
        >>> time_from_utc(+1, 23.0)
        0.0
    */
}
