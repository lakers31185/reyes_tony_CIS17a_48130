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
#include "Info.h"
using namespace std;
void Info::printInfo() const
{
cout<<name<<"         "<<country<<endl;    
}
void Info::setName(string user,string rep){
    name=user;
    country=rep;
}
string Info::getName() const
{
    return name;
}
string Info::getCountry() const
{
    return country;
}
Info::Info(string user,string rep){
    name=user;
    country=rep;
    }