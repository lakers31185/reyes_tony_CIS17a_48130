/* 
 * File:   cpuShot.h
 * Author: User
 *
 * Created on December 11, 2014, 2:41 PM
 */

#ifndef CPUSHOT_H
#define	CPUSHOT_H
#include "shot.h"
class Cpu : public Shot
{
    
    private:
              //User Input Member
       int cpuRand;
       int a;
    public:
  
  
          
    void set(int);
 
    int getCpu()const
    {return cpuRand;}
   
    void print();
    Cpu (int u = 0, int v = 0);
   };


#endif	/* CPUSHOT_H */

