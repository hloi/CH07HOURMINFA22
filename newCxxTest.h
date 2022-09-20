/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */

/* 
 * File:   newCxxTest.h
 * Author: hloi
 *
 * Created on January 26, 2018, 3:52 PM
 */

#ifndef NEWCXXTEST_H
#define NEWCXXTEST_H

#include <cxxtest/TestSuite.h>
//Include your classes header file(s) below and uncomment.
#include "TimeHrMn.h"

class newCxxTest : public CxxTest::TestSuite {
public:

    //All tests should start with the word 'test' followed by
    //the name of the function being tested.

    void testHrMin() {
        //Use TS_ASSERT_EQUALS(Result, ExpResult) to test your functions. 
        TimeHrMn time1(3, 22);
        TimeHrMn time2(2, 50);
        TimeHrMn sumTime;

        sumTime = time1 + time2;
        TS_ASSERT_EQUALS(sumTime.getHours(), 6);
        TS_ASSERT_EQUALS(sumTime.getMinutes(), 12);

    }

    void testHrMin2() {
        //Use TS_ASSERT_EQUALS(Result, ExpResult) to test your functions.
        TimeHrMn time1(10, 22);
        TimeHrMn time2(13, 50);
        TimeHrMn sumTime;

        sumTime = time1 + time2;
        TS_ASSERT_EQUALS(sumTime.getHours(), 0);
        TS_ASSERT_EQUALS(sumTime.getMinutes(), 12);

    }
};
#endif /* NEWCXXTEST_H */

