#include "extra-task-1.h";


int main()
{
    assert(seconds_difference(1800.0, 3600.0) == 1800.0);
    assert(seconds_difference(3600.0, 1800.0) == -1800.0);
    assert(seconds_difference(1800.0, 2160.0) == 360.0);
    assert(seconds_difference(1800.0, 1800.0) == 0.0);

    assert(hours_difference(1800.0, 3600.0) == 0.5);
    assert(hours_difference(3600.0, 1800.0) == -0.5);
    assert(hours_difference(1800.0, 2160.0) == 0.1);
    assert(hours_difference(1800.0, 1800.0) == 0.0);
 
    assert(to_float_hours(0,15,0) == 0.25);
    assert(to_float_hours(2,45,9) == 2.7525);
    assert(to_float_hours(1,0,36) == 1.01);

    /*
    Return the total number of hours in the specified number
    of hours, minutes, and seconds.

    Precondition: 0 <= minutes < 60  and  0 <= seconds < 60

    >>> to_float_hours(0, 15, 0)
    0.25

    >>> to_float_hours(2, 45, 9)
    2.7525

    >>> to_float_hours(1, 0, 36)
    1.01
*/
}