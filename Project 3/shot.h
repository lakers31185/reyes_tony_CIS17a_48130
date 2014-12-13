/* 
 * File:   shot.cpp
 * Author: Tony Reyes
 * December 6, 2014, 12:20 PM
 * Project 2 
 * Shot Location Specifications
 */

#include <iostream> 
#include<cstdlib> 
#include <fstream>
using namespace std;
#ifndef SHOT_H
#define	SHOT_H


//Shot Location Class
class Shot 
{
    
    private:
       int user;            //User Input Member
       int pos;
       int x;
    public:
   int Position (int);            //Shot Constructor (1-3) with Validation
   
    void Choose();
    int getLoc()const       //Get Validated Location & Return
   {return user;}

    
    virtual void print();
    
    
    
    Shot(int u = 0);
   };
              
#endif	/* SHOT_H */

