/*
 Project Name: Distance
 File Name: Distance.hpp
 Created by Aleksandr Golovin on 10/10/17.
Copyright © 2017 Aleksandr Golovin. All rights reserved.
*/

#ifndef Distance_hpp
#define Distance_hpp

#include <stdio.h>
#include <iostream>

using namespace std;

class Distance
{
    
private:
    
    //Private attributes
    int ft,in;
    
    //Converter
    int toInch(int ft)const;
    int toFt (int inch)const;
    int remIn (int totalInch)const;
    
public:
    //Constructors
    Distance(){ft=0; in=0;}
    Distance(int ft, int in);
    
    //Accessors
    int getFeet()const {return ft;}
    int getInches()const {return in;}
    
    //Mutator
    void setDistance (int feet, int inches);
    
    //Overloaded Functions
    Distance operator + (const Distance &rhs)const;
    Distance operator - (const Distance &rhs)const;
    Distance operator * (const int &rhs)const;
    Distance operator / (const int &rhs)const;
    friend ostream & operator << (ostream & out, const Distance & from);
};

#endif /* Distance_hpp */
