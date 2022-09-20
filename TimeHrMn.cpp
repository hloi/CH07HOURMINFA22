//
// Created by hloi on 9/20/2022.
//
#include <iostream>
#include "TimeHrMn.h"

using namespace std;

// Overload + operator for TimeHrMn
TimeHrMn TimeHrMn::operator+(TimeHrMn rhs) {
    TimeHrMn timeTotal;

    timeTotal.minutes = minutes + rhs.minutes;
    if (timeTotal.minutes > 59) {
        timeTotal.minutes = timeTotal.minutes % 60;
        timeTotal.hours++;

    }
    timeTotal.hours   = timeTotal.hours + hours  + rhs.hours;
    if (timeTotal.hours > 23) {
        timeTotal.hours = timeTotal.hours % 24;
    }

    return timeTotal;
}

TimeHrMn::TimeHrMn(int timeHours, int timeMinutes) {
    hours  = timeHours;
    minutes = timeMinutes;
}

void TimeHrMn::Print() const {
    cout << "H:" << hours << ", " << "M:" << minutes << endl;
}

int TimeHrMn::getHours() const {
    return hours;
}

int TimeHrMn::getMinutes() const {
    return minutes;
}

