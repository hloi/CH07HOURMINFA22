//
// Created by hloi on 9/20/2022.
//

#ifndef CH07HOURMINFA22_TIMEHRMN_H
#define CH07HOURMINFA22_TIMEHRMN_H


class TimeHrMn {
public:
    TimeHrMn(int timeHours = 0, int timeMinutes = 0);
    void Print() const;
    TimeHrMn operator+(TimeHrMn rhs) ;
private:
    int hours;
    int minutes;
};

#endif //CH07HOURMINFA22_TIMEHRMN_H
