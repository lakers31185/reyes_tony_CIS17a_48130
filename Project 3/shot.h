/* 
 * File:   shot.cpp
 * Author: Tony Reyes
 * December 6, 2014, 12:20 PM
 * Project 2 
 * Shot Location Specifications
 */

#ifndef SHOT_H
#define	SHOT_H

//Shot Location Class
class Shot{
    
    private:
       int user;
     
    
public:
    Shot (int);
    
    void setLoc(int);
    int getLoc()const
    {return user;}
   
    
    
    
    
};
              

#endif	/* SHOT_H */

