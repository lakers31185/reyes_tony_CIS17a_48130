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
#include <fstream>
using namespace std;

//Shot Location Constructor with Validation
//Left=1, Center=2, Right=3;
int Shot::Position(int loc){
    int pos;
    
    if(loc>=1&&loc<=3){
        pos=loc;
    return pos;
    }
    else{
        cout<<"GAME-OVER"<<endl;
        exit(EXIT_FAILURE);
    }
}
void Shot::Choose(){
    //User Location Object
    cout<<endl;
    cout<<"Choose A Shot Location From The Following: "<<endl 
         <<"[1] Position: Left  "<<endl 
         <<"[2] Position: Center "<<endl 
         <<"[3] Position: Right  "<<endl;  
     cout<<"Type Anything Else To Exit Game"<<endl;
     cout<<"Enter A Position:  "; 
     cin>>user; 
}
void Shot::print(){
    cout<<"base class x="<<x<<endl;
}
Shot::Shot(int u){
    x=u;
}
