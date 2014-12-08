/* 
 * File:   main.cpp
 * Author:tony  reyes
 * project 3 
 *
 * Created on December 6, 2014, 12:19 PM
 */
 //System Libraries 
 #include <iostream> 
 #include <string> 
 #include<ctime> 
 #include<cstdlib> 
 #include<fstream> 
 #include<iomanip>

using namespace std;

#include "shot.h"
#include "cpuShot.h"

int main(int argc, char** argv) {
    int loc,cpuLoc;
   
    cout<<"Choose A Shot Location From The Following: "<<endl 
         <<"[1] Position: Left  "<<endl 
        <<"[2] Position: Center "<<endl 
         <<"[3] Position: Right  "<<endl;  
     cout<<"Type Anything Else To Exit Game"<<endl;
     cout<<"Enter A Position:  "; 
     cin>>loc; 
    
Shot user(loc); 

cout<<user.getLoc()<<endl;

Cpu ai(cpuLoc);
srand(static_cast<unsigned int>(time(0))); 
 
cout<<ai.getCpu()<<endl;

    return 0;
}

