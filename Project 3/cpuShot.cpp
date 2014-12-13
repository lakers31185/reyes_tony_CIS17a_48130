/* 
 * File:   shot.cpp
 * Author: Tony Reyes
 * December 6, 2014, 12:20 PM
 * Project 2
 * Shot Location With Validation Implementation
 */
//My Libraries
#include "cpuShot.h"      //Shot Class File
#include <iostream> 
#include<cstdlib> 
#include <fstream>
using namespace std;

//Shot Location Constructor with Validation


 void Cpu::set(int para){
     cpuRand=para;
    
     Position(para);
    
 }
 void Cpu::print(){
     cout<<"Derived Class";
     Shot::print();
     cout<<"a="<<a<<endl;
 }
 Cpu::Cpu(int u, int v):Shot(u){
     a=v;
 }
void Cpu::cpuLocation()
 {
    srand(static_cast<unsigned int>(time(0)));  
    cpuLoc=rand()%100  ;
 }