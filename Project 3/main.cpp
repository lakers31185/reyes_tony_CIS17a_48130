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


#include "shot.h"
#include "Intro.h"
#include "cpuShot.h"
#include "User.h"
using namespace std;
void callPrint(Shot*);



int main(int argc, char** argv) {


//Game Introduction Object 
    Intro welcome;
//Call Object & Display Introduction  
    welcome.intro();
    int pos;
//Declare Variables & User Inputs
    cout<<"Type 1 to Play as Goal Keeper: "<<endl; 
             cout<<"Type 2 to Take a Penalty Shot ** BONUS "<<endl; 
             cout<<"Type Anything else to quit game"<<endl;
             //Read the choice 
             cin>>pos;
             cout<<endl; 
             Shot Position;
          cout<<Position.Position(pos);
    //Variable To Hold User Location
    int loc;
    //Variable To Hold Random CPU Location
    int cpuLoc,left;
    Shot select;
  select.Choose();
     
    
//Object For User Shot Location   

// show user
  

//Object For CPU Location
    Cpu ai(cpuLoc);
//show cpu
cout<<ai.getCpu()<<endl;

Shot *q;
Cpu *r;
q = new Shot(5);
r = new Cpu (3,15);
q->print();
r->print();
cout<<"call print function"<<endl;
callPrint(q);
callPrint(r);
cout<<endl;




User hope("tony","usa",4);
hope.printInfo();
delete q;
delete r;
return 0;
}
void callPrint(Shot* p){
    p->print();
}