/*
 Project Name: Distance
 File Name: Distance.cpp
 Created by Aleksandr Golovin on 10/11/17.
 Copyright © 2017 Aleksandr Golovin. All rights reserved.
 */

#include "Distance.hpp"
#include <cmath>

//Converts feet to inches
int Distance:: toInch(int ft)const
{
    return (ft*12);
}

//Converts inches to feet
int Distance:: toFt(int inch)const
{
    return (inch/12);
}

//Returns left over inches after feet are taken out
int Distance:: remIn(int totalInch)const
{
    return (totalInch%12);
}

//Initializes feet and inches
void Distance:: setDistance(int feet, int inches)
{
    //For positive values
    if (feet>=0 && inches>=0)
    {
        //Handle case if inches is greater than 12
        if(inches>=12)
        {
            ft=feet+toFt(inches);
            inches= remIn(inches);
        }
        else
        {
            ft=feet;
            in=inches;
        }
    }
    //Incase a value is negative
    else
    {
        int totDist= toInch(feet)+inches;
        ft=toFt(totDist);
        in=remIn(totDist);
    }
}

//Consructor that calls setDistance
Distance::Distance (int feet, int inches)
{
    setDistance(feet,inches);
}

//Overloaded addition operator
Distance Distance:: operator + (const Distance &rhs) const
{
    int lhsInch= (this->toInch(this->getFeet()))+this->getInches(),
    rhsInch= (rhs.toInch(rhs.getFeet()))+rhs.getInches();
    
    int totInch= lhsInch+rhsInch;
    
    Distance sum(toFt(totInch),remIn(totInch));

    return sum;
}

//Overloaded subtraction operator
Distance Distance:: operator - (const Distance &rhs) const
{
    int lhsInch= (this->toInch(this->getFeet()))+this->getInches(),
    rhsInch= (rhs.toInch(rhs.getFeet()))+rhs.getInches();
    
    int totInch= lhsInch-rhsInch;
    
    Distance diff(toFt(totInch),remIn(totInch));
    
    return diff;
}

//Overloaded multipication operator
Distance Distance:: operator * (const int &rhs)const
{
    int lhsInch= (this->toInch(this->getFeet()))+this->getInches();
    int totInch=lhsInch*rhs;
    
    Distance product (toFt(totInch),remIn(totInch));
    
    return product;
}

//Overloaded division operator
Distance Distance:: operator / (const int &rhs)const
{
    //Safeguard against division by zero
    if(rhs!=0)
    {
        int lhsInch= (this->toInch(this->getFeet()))+this->getInches();
        
        //Uses std round function to round number after division
        int totInch=round(lhsInch/rhs);
    
        Distance quotient (toFt(totInch),remIn(totInch));
        
        return quotient;
    }
    else
    {
        cout<<"You naughty child, division by zero is illegal\nI will give back your original value\n";
        return *this;
    }
}

//Overloaded << operator
ostream & operator << (ostream & out, const Distance & from)
{
    out<<from.ft<<"/"<<from.in<<endl;
    
    return out;
}
