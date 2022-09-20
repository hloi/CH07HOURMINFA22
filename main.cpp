#include "TimeHrMn.h"

int main() {
    TimeHrMn time1(3, 22);
    TimeHrMn time2(2, 50);
    TimeHrMn sumTime;

    sumTime = time1 + time2;
    sumTime.Print();

    return 0;
}