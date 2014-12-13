/* 
 * File:   Age.h
 * Author: User
 *
 * Created on December 12, 2014, 11:24 AM
 */

#ifndef AGE_H
#define	AGE_H
#include "Info.h"

class Age: public Info
{
    public:
        virtual void printInfo()const=0;
       
        void setAge(long id );
       long getAge()const;
        Age(string user="",string rep="",long id=0);
        private:
            long gender;
    
    
};


#endif	/* AGE_H */

