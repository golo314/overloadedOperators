/*
 Project Name: Distance
 File Name: distTest.cpp
 Created by Aleksandr Golovin on 10/11/17.
 Copyright © 2017 Aleksandr Golovin. All rights reserved.
*/

#include "distTest.hpp"

//Tests get feet function
void testDriver::testGetFt()const
{
    Distance test(3,0);
    if(test.getFeet()!=3) cout<<"Failed Test: Did not return correct feet\n";
}

//Tests get inches function
void testDriver:: testGetIn()const
{
    Distance test(3,2);
    if(test.getInches()!=2) cout<<"Failed Test: Did not return correct inch value\n";
}

//Tests set distance function
void testDriver:: testSetDist()const
{
    Distance test(5,9);
    if (test.getFeet()!=5 && test.getInches()!=9) cout<<"Failed Test: Initialization of two positive did not work right\n";
    
    Distance test1(3,-2);
    if (test1.getFeet()!=2 && test1.getInches()!=10) cout<<"Failed Test: Initialization of pos. ft. neg. in. did not work right\n";
    
    Distance test2(-1,5);
    if (test2.getFeet()!=0 && test2.getInches()!=-7) cout<<"Failed Test: Initialization of neg. ft. pos. in. did not work right\n";
    
    Distance test3(-1,-5);
    if (test3.getFeet()!=-1 && test3.getInches()!=-5) cout<<"Failed Test: Initialization of neg. ft. neg. in. did not work right\n";
}

//Tests overloaded addition operator
void testDriver:: testAdd()const
{
    Distance test1(3,2), test2(5,6);
    Distance result = test1+test2;
    if (result.getFeet()!=8 && result.getInches()!=8) cout<<"Failed Test: Addition of two positive did not work right\n";
  
    
    Distance test3(3,2), test4(5,-2);
    Distance result2 = test3+test4;
    if (result2.getFeet()!=8 && result2.getInches()!=0) cout<<"Failed Test: Addition of one pos. one neg. did not work right\n";
    
    Distance test5(-3,-2), test6(5,6);
    Distance result3 = test5+test6;
    if (result3.getFeet()!=2 && result3.getInches()!=8) cout<<"Failed Test: Addition of neg. and pos. did not work right\n";
}

//Tests overloaded subtraction operator
void testDriver::testSub()const
{
    Distance test1(3,2), test2(5,6);
    Distance result = test1-test2;
    if (result.getFeet()!=-2 && result.getInches()!=-8) cout<<"Failed Test: Sub. of two positive did not work right\n";
    
    
    Distance test3(3,2), test4(-5,-2);
    Distance result2 = test3-test4;
    if (result2.getFeet()!=8 && result2.getInches()!=4) cout<<"Failed Test: Sub. of one pos. one neg. did not work right\n";
    
    Distance test5(-3,-2), test6(5,6);
    Distance result3 = test5-test6;
    if (result3.getFeet()!=-8 && result3.getInches()!=-8) cout<<"Failed Test: Sub. of neg. and pos. did not work /right\n";
}

//Tests overloaded division operator
void testDriver::testDivd()const
{
    Distance test1(3,2);
    Distance result = test1/2;
    if (result.getFeet()!=1 && result.getInches()!=2) cout<<"Failed Test: Div. of pos. dist pos. int. did not work right\n";
    
    Distance test2(-3,-2);
    Distance result2 = test2/2;
    if (result2.getFeet()!=-1 && result2.getInches()!=-2) cout<<"Failed Test: Div. of neg. dist. pos. int. did not work right\n";
    
    Distance test3(3,2);
    Distance result3 = test3/(-2);
    if (result3.getFeet()!=-1 && result3.getInches()!=-2) cout<<"Failed Test: Div. of pos. dist. neg. int. did not work right\n";
    
    Distance test4(-3,-2);
    Distance result4 = test3/(-2);
    if (result4.getFeet()!=-1 && result4.getInches()!=-2) cout<<"Failed Test: Div. of neg. dist. neg. int. did not work right\n";
    
    Distance test5(-3,-2);
    Distance result5 = test5/0;
    if (result5.getFeet()!=-3 && result5.getInches()!=-2) cout<<"Failed Test: Div. of neg. and zero did not work /right\n";
}

//Tests overloaded multipication operator
void testDriver:: testMult()const
{
    Distance test1(3,2);
    Distance result = test1*2;
    if (result.getFeet()!=6 && result.getInches()!=4) cout<<"Failed Test: Mult. of pos. dist pos. int. did not work right\n";
    
    Distance test2(-3,-2);
    Distance result2 = test2*2;
    if (result2.getFeet()!=-6 && result2.getInches()!=-4) cout<<"Failed Test: Mult. of neg. dist. pos. int. did not work right\n";
    
    Distance test3(3,2);
    Distance result3 = test3*(-2);
    if (result3.getFeet()!=-6 && result3.getInches()!=-4) cout<<"Failed Test: Mult. of pos. dist. neg. int. did not work right\n";
    
    Distance test4(-3,-2);
    Distance result4 = test3*(-2);
    if (result4.getFeet()!=6 && result4.getInches()!=4) cout<<"Failed Test: Mult. of neg. dist. neg. int. did not work right\n";
    
    Distance test5(-3,-2);
    Distance result5 = test5*0;
    if (result5.getFeet()!=0 && result5.getInches()!=0) cout<<"Failed Test: Mult. of neg. and zero did not work /right\n";
}
