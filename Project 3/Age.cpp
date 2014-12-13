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
#include "Age.h"
using namespace std;

void Age::setAge(long id)
{
    gender=id;
}
long Age::getAge() const
{
    return gender;
}
Age::Age(string user, string rep, long id):Info(user,rep){
    gender=id;
}