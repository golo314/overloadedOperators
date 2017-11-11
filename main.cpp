/*
 Project Name: Distance
 File Name: main.cpp
 Created by Aleksandr Golovin on 10/10/17.
 Copyright © 2017 Aleksandr Golovin. All rights reserved.
*/

#include <iostream>
#include "Distance.hpp"
#include "distTest.hpp"

int main(int argc, const char * argv[])
{
    cout<<"Running Test Driver, if test passes expect no output\n";
    testDriver test;
    test.testGetFt();
    test.testGetIn();
    test.testSetDist();
    test.testAdd();
    test.testSub();
    test.testDivd();
    return 0;
}
