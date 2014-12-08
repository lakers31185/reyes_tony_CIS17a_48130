/* 
 * File:   shot.cpp
 * Author: Tony Reyes
 * December 6, 2014, 12:20 PM
 * Project 2
 * Shot Location With Validation Implementation
 */
//My Libraries
#include "shot.h"      //Shot Class File
#include <iostream> 
#include<cstdlib> 
using namespace std;

//Shot Location Constructor with Validation
//Left=1, Center=2, Right=3;
Shot::Shot(int loc){
    if(loc>=1&&loc<=3)
        user=loc;
    else{
        cout<<"GAME-OVER"<<endl;
        exit(EXIT_FAILURE);
    }
}
