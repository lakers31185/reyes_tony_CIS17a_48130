/* 
 * File:   Intro.h
 * Author: User
 *
 * Created on December 8, 2014, 12:51 PM
 */

#ifndef INTRO_H
#define	INTRO_H
 #include <iostream> 
 #include <string> 
 #include<ctime> 
 #include<cstdlib> 
 #include<fstream> 
 #include<iomanip> 
 using namespace std; 
class Intro{
    
public:
   void intro(){
    cout<<"Welcome to World Cup Fever: Penalty Shoot Out!... " 
<<"To Play this game some specific information will be asked about " 
<<"who you are...You will be asked to select the position " 
 <<"of either GoalKeeper or GoalScorer...The Computer will Randomly " 
 <<"Generate a Shot Location or   Guess Your Shot Location... " 
 <<"You Must Decide To Either Defend or Score Goals...." 
 <<"Can You Out Smart your Opponent!" 
  <<"                                                   "<<endl 
 <<"               _______________________             "<<endl 
 <<"              |                       |            "<<endl         
 <<"              |                       |            "<<endl 
 <<"              |   1       2       3   |            "<<endl         
 <<"              |                       |            "<<endl         
 <<"                                                   "<<endl;  
    
}
    
    
};


#endif	/* INTRO_H */

