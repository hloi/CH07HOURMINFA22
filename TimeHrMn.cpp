//
// Created by hloi on 9/20/2022.
//
#include <iostream>
#include "TimeHrMn.h"

using namespace std;

// Overload + operator for TimeHrMn
TimeHrMn TimeHrMn::operator+(TimeHrMn rhs) {
    TimeHrMn timeTotal;

    timeTotal.hours   = hours   + rhs.hours;
    timeTotal.minutes = minutes + rhs.minutes;

    return timeTotal;
}

TimeHrMn::TimeHrMn(int timeHours, int timeMinutes) {
    hours  = timeHours;
    minutes = timeMinutes;
}

void TimeHrMn::Print() const {
    cout << "H:" << hours << ", " << "M:" << minutes << endl;
}