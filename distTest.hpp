/*
 Project Name: Distance
 File Name: distTest.hpp
 Created by Aleksandr Golovin on 10/11/17.
 Copyright © 2017 Aleksandr Golovin. All rights reserved.
 */

#ifndef distTest_hpp
#define distTest_hpp

#include <stdio.h>
#include "Distance.hpp"

class testDriver
{
public:
    
    //Tests for Distance class functions
    void testGetFt()const;
    void testGetIn()const;
    void testSetDist()const;
    void testAdd()const;
    void testSub()const;
    void testDivd()const;
    void testMult()const;
};

#endif /* distTest_hpp */
