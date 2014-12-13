/* 
 * File:   Info.h
 * Author: User
 *
 * Created on December 11, 2014, 9:29 PM
 */

#ifndef INFO_H
#define	INFO_H
#include <string>
#include <cstdlib>
using namespace std;

class Info{
 public:
    void printInfo()const;
     void setName(string,string);
     string getName()const;
     string getCountry() const;
     Info(string user = " ",string rep = " ");
private:
    string name;
    string country;
};




#endif	/* INFO_H */

