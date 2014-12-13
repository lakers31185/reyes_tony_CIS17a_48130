/* 
 * File:   User.h
 * Author: User
 *
 * Created on December 12, 2014, 11:39 AM
 */

#ifndef USER_H
#define	USER_H
#include "Age.h"

class User:public Age
{
    public:
        void set(string,string,long,int);
        void setRounds(int);
        int getRounds();
        void printInfo()const;
       
        User(string user="",string rep="",long id=0,int round=0);
        private:
        int wins; 
    
};




#endif	/* USER_H */

