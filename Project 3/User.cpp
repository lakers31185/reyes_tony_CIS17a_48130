/* 
 /* 
 * File:   shot.cpp
 * Author: Tony Reyes
 * December 6, 2014, 12:20 PM
 * Project 2
 */
#include <iostream> 
 #include <string> 
 #include<ctime> 
 #include<cstdlib> 
 #include<fstream> 
#include <cstdlib>
#include "User.h"
using namespace std;

void User::set(string user, string rep, long id, int round){
    setName(user,rep);
    setAge(id);
    wins=round;
}
void User::setRounds(int round)
{
    wins=round;
}
int User::getRounds(){
    return wins;
}
void User::printInfo() const
{
    
    cout<<"Top Rank List"<<endl;
    cout<<"___________________"<<endl;
    cout<<"Name        Country"<<"  "<<"Age-"<<getAge()<<endl;
    Info::printInfo();
    
    
}

User::User(string user, string rep , long id , int round ):Age(user,rep,id){
    wins=round;
}