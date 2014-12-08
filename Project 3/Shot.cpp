
 #include "shot.h"
 #include <iostream> 
 #include <string> 
 #include<ctime> 
 #include<cstdlib> 
 #include<fstream> 
 #include<iomanip>

using namespace std;
//Shot Constructor 
Shot::Shot(int loc){
    user=loc;
}

//Mutator Set Function
void Shot::setLoc(int loc)
{

    if(loc>=1||loc<=3)
        user=loc;
    else 
    {
        cout<<"invalid entry"<<endl;
        exit(EXIT_FAILURE);
    }
}