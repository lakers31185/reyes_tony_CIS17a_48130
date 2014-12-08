/* 
 * File:   shot.h
 * Author: User
 *
 * Created on December 6, 2014, 12:20 PM
 */

#ifndef SHOT_H
#define	SHOT_H


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

