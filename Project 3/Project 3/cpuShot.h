/* 
 * File:   cpuShot.h
 * Author: Tony Reyes
 * December 6, 2014, 12:20 PM
 * Random CPU Shot Location Implementation
 */

#ifndef CPUSHOT_H
#define	CPUSHOT_H
//Shot Location Class
//My Libraries
#include "cpuShot.h"      //cpuShot Class File
#include <iostream> 
#include <cstdlib> 
 #include<iomanip> 
 #include <ctime> 
using namespace std;
class Cpu{
    
    private:
       int cpuRand;
     
    
public:
    Cpu (int loc){
        cpuRand=loc;
         //Set Random Seed For Shot Generator 
   srand(static_cast<unsigned int>(time(0))); 
 
   //Set Computer Shot Location to Random 
   loc=rand()%3+1;  
    }
    
    
    int getCpu()const
    
    {return cpuRand;}
   
};


#endif	/* CPUSHOT_H */

