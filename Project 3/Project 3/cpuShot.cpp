/* 
 * File:   shot.cpp
 * Author: Tony Reyes
 * December 6, 2014, 12:20 PM
 * Random CPU Shot Location Specifications
 */

//My Libraries
#include "cpuShot.h"      //cpuShot Class File
#include <iostream> 
#include <cstdlib> 
 #include<iomanip> 
 #include <ctime> 

Cpu::Cpu(int loc){
    cpuRand=loc;
    //Set Random Seed For Shot Generator 
   srand(static_cast<unsigned int>(time(0))); 
 
   //Set Computer Shot Location to Random 
   loc=rand()%3+1;  
}
