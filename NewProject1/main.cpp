/* 
 * File:   main.cpp
 * Author: User
 *
 * Created on October 25, 2014, 3:10 PM
 */

//System Libraries 
 #include <iostream> 
 #include <string> 
 #include<ctime> 
 #include<cstdlib> 
 #include<fstream> 
 #include<iomanip> 
 using namespace std; 
//Global Constants 
 
//User Libraries 
class IntroClass{
    //Access Specifier
    public:
        void introGame(){
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

struct User{
    
    int location;
    char name [10];
    char xxx [3];
    int shot;
    string country;
    int games;
    int wins;

    int cpu;
    char position;
  int *total;
  
};
//Function Prototypes 
User userLocation ();
void info(User *s );
void country (User *t);
void post (User *p);
User fillArrays(int n);
void shot (User &g);
User print(int the[5][2],int sizeRow,int sizeCol);
int main(int argc, char** argv) {

//Oriented Objects
IntroClass introduction;
//Call Class Function
introduction.introGame();
//Structure Variable
User b;

    //User Information
    info (&b);
    //Random Opponent
    country(&b);
    
    //Display Option To Play as Keeper or Scorer 
             cout<<"Type 1 to Play as Goal Keeper: "<<endl; 
             cout<<"Type 2 to Take a Penalty Shot ** BONUS "<<endl; 
             cout<<"Type Anything else to quit game"<<endl;
             //Read the choice 
             cin>>b.position;
             cout<<endl; 
              
             //Choose Either Keeper/Scorer VS. Computer 
             switch(b.position){ 
 
 
             //Play as Keeper; First Simulation 
             case'1':{ 
    
    
    
    //Display Match Details
    cout<<b.country<<"'VS'"<<b.xxx<<endl; 
    cout<<endl; 
   
   
       //1 Round Equal 5 shots
       for (int j=0;j<5;j++){
        
       
       
          
        
      
     b=userLocation();
        shot(b);
   
    
         
    //Choose Either Keeper/Scorer VS. Computer 

    if (b.shot==1){
        if (b.cpu==1){
            //Read From A File For Simple Graphic  
            fstream leftLeft; 
            leftLeft.open("leftLeft.txt"); 
            //Open & Close This Specific Graphic File 
            if (leftLeft.is_open()) 
            { 
                string temp; 
                while(getline(leftLeft,temp)) 
                cout<<temp<<endl; 
                cout<<endl;
                cout<<"You Blocked The Shot!"<<endl; 
               
                cout<<endl; 
            } 
            leftLeft.close(); 
           
        }
        else if (b.cpu == 2){
        //Read From A File For Simple Graphic  
         fstream LeftCenter; 
        LeftCenter.open("LeftCenter.txt"); 
         //Open & Close This Specific Graphic File 
         if (LeftCenter.is_open()) 
         { 
             string temp; 
             while(getline(LeftCenter,temp)) 
            cout<<temp<<endl; 
            cout<<endl; 
             cout<<"They Scored A Goal..."<<endl; 
             cout<<b.country<<":Gets Point"<<endl; 
            cout<<endl; 
        } 
        LeftCenter.close(); 
        //Set Loss=-1
       

        }
        else{
            //Read From A File For Simple Graphic  
            fstream leftRight; 
            leftRight.open("leftRight.txt"); 
            //Open & Close This Specific Graphic File 
            if (leftRight.is_open()){ 
                string temp; 
                while(getline(leftRight,temp)) 
                cout<<temp<<endl; 
                cout<<endl; 
                cout<<b.country<<"They Scored A Goal..."<<endl; 
                cout<<endl; 
            } 
            leftRight.close(); 
            //Set Loss=0 
        }
    }
  //Else If User=Center & Comp=Left "You Lose" 
                 else if (b.shot==2) 
                 { 
                     if (b.cpu==1) 
                     { 
                         //Read From A File For Simple Graphic  
                         fstream centerLeft; 
                         centerLeft.open("centerLeft.txt"); 
                         //Open & Close This Specific Graphic File 
                         if (centerLeft.is_open()) 
                         { 
                             string temp; 
                             while(getline(centerLeft,temp)) 
                             cout<<temp<<endl; 
                             cout<<endl; 
                             cout<<b.country<<"They Scored A Goal..."<<endl; 
                           
                             cout<<endl; 
                         } 
                         centerLeft.close(); 
                         //Set Loss=0 
                       
                     } 
                     //Else If User=Center & Comp=Center "You Win" 
                     else if(b.cpu==2) 
                     { 
                         //Read From A File For Simple Graphic  
                         fstream centerCenter; 
                         centerCenter.open("centerCenter.txt"); 
                         //Open & Close This Specific Graphic File 
                         if (centerCenter.is_open()) 
                         { 
                             string temp; 
                             while(getline(centerCenter,temp)) 
                             cout<<temp<<endl; 
                             cout<<endl; 
                             cout<<"You Blocked The Shot!"<<endl; 
                           
                             cout<<endl; 
                         } 
                         centerCenter.close(); 
                         //Set Win=1 
                        
                     } 
                     //Else If User=Center & Comp=Right "You Win"     
                     else 
                     { 
                         //Read From A File For Simple Graphic 
                         fstream centerRight; 
                         centerRight.open("centerRight.txt"); 
                        //Open & Close This Specific Graphic File 
                         if (centerRight.is_open()) 
                         { 
                             string temp; 
                             while(getline(centerRight,temp)) 
                             cout<<temp<<endl; 
                             cout<<endl; 
                             cout<<b.country<<"They Scored A Goal..."<<endl; 
                           
                             cout<<endl; 
                         } 
                         centerRight.close(); 
                         //Set Win=1 
                        
                     } 
                 } 
                 //Else If User=Right & Comp=Left "You Lose"    
                 else if (b.shot==3) 
                     if (b.cpu==1) 
                     { 
                         //Read From A File For Simple Graphic 
                         fstream rightLeft; 
                         rightLeft.open("rightLeft.txt"); 
                         //Open & Close This Specific Graphic File 
                         if (rightLeft.is_open()) 
                         { 
                             string temp; 
                             while(getline(rightLeft,temp)) 
                             cout<<temp<<endl; 
                             cout<<endl; 
                             cout<<b.country<<"They Scored A Goal..."<<endl; 
                             
                             cout<<endl; 
                         } 
                         rightLeft.close(); 
                         //Set Loss=0 
                         
                     } 
                     //Else If User=Right & Comp=Center "You Lose" 
                     else if (b.cpu==2) 
                     { 
                         fstream rightCenter; 
                         rightCenter.open("rightCenter.txt"); 
                         if (rightCenter.is_open()) 
                         { 
                             string temp; 
                             while(getline(rightCenter,temp)) 
                             cout<<temp<<endl; 
                             cout<<endl; 
                             cout<<b.country<<"They Scored A Goal..."<<endl; 
                           
                             cout<<endl; 
                         } 
                         rightCenter.close(); 
                         //Set Loss=0 
                        
                     } 
                     //Else If User=Right & Comp=Right "You Win" 
                     else 
                     { 
                         fstream rightRight; 
                         rightRight.open("rightRight.txt"); 
                         if (rightRight.is_open()) 
                         { 
                             string temp; 
                             while(getline(rightRight,temp)) 
                             cout<<temp<<endl; 
                             cout<<endl; 
                             cout<<"You Blocked The Shot!"<<endl; 
                            
                             cout<<endl; 
                              
                         } 
                         rightRight.close(); 
                         //Set Win=1 
                     }
    
       }
             
             }
             
             
        //Choose Either Keeper/Scorer VS. Computer 
             case'2':{ 
                 
     b=userLocation();
      
    
    
     //Take a Penalty shot
       for (int j=0;j<1;j++){
        shot(b);
    if (b.shot==1){
        if (b.cpu==1){
            //Read From A File For Simple Graphic  
            fstream leftLeft; 
            leftLeft.open("leftLeft.txt"); 
            //Open & Close This Specific Graphic File 
            if (leftLeft.is_open()) 
            { 
                string temp; 
                while(getline(leftLeft,temp)) 
                cout<<temp<<endl; 
                cout<<endl;
                cout<<"They Blocked Your Shot!!"<<endl; 
               
                cout<<endl; 
            } 
            leftLeft.close(); 
            
        }
        else if (b.cpu == 2){
        //Read From A File For Simple Graphic  
         fstream LeftCenter; 
        LeftCenter.open("LeftCenter.txt"); 
         //Open & Close This Specific Graphic File 
         if (LeftCenter.is_open()) 
         { 
             string temp; 
             while(getline(LeftCenter,temp)) 
            cout<<temp<<endl; 
            cout<<endl; 
             cout<<"GoaLLLL!!!..."<<endl; 
           
            cout<<endl; 
        } 
        LeftCenter.close(); 
        //Set Loss=-1
     
        }
        else{
            //Read From A File For Simple Graphic  
            fstream leftRight; 
            leftRight.open("leftRight.txt"); 
            //Open & Close This Specific Graphic File 
            if (leftRight.is_open()){ 
                string temp; 
                while(getline(leftRight,temp)) 
                cout<<temp<<endl; 
                cout<<endl; 
                cout<<"GoaLLLL!!!..."<<endl; 
                cout<<endl; 
            } 
            leftRight.close(); 
            //Set Loss=0 
        }
    }
  //Else If User=Center & Comp=Left "You Lose" 
                 else if (b.shot==2) 
                 { 
                     if (b.cpu==1) 
                     { 
                         //Read From A File For Simple Graphic  
                         fstream centerLeft; 
                         centerLeft.open("centerLeft.txt"); 
                         //Open & Close This Specific Graphic File 
                         if (centerLeft.is_open()) 
                         { 
                             string temp; 
                             while(getline(centerLeft,temp)) 
                             cout<<temp<<endl; 
                             cout<<endl; 
                             cout<<"GoaLLLL!!!..."<<endl; 
                           
                             cout<<endl; 
                         } 
                         centerLeft.close(); 
                         //Set Loss=0 
                        
                     } 
                     //Else If User=Center & Comp=Center "You Win" 
                     else if(b.cpu==2) 
                     { 
                         //Read From A File For Simple Graphic  
                         fstream centerCenter; 
                         centerCenter.open("centerCenter.txt"); 
                         //Open & Close This Specific Graphic File 
                         if (centerCenter.is_open()) 
                         { 
                             string temp; 
                             while(getline(centerCenter,temp)) 
                             cout<<temp<<endl; 
                             cout<<endl; 
                             cout<<"They Blocked Your Shot!!"<<endl; 
                           
                             cout<<endl; 
                         } 
                         centerCenter.close(); 
                         //Set Win=1 
                        
                     } 
                     //Else If User=Center & Comp=Right "You Win"     
                     else 
                     { 
                         //Read From A File For Simple Graphic 
                         fstream centerRight; 
                         centerRight.open("centerRight.txt"); 
                        //Open & Close This Specific Graphic File 
                         if (centerRight.is_open()) 
                         { 
                             string temp; 
                             while(getline(centerRight,temp)) 
                             cout<<temp<<endl; 
                             cout<<endl; 
                             cout<<"GoaLLLL!!!..."<<endl; 
                           
                             cout<<endl; 
                         } 
                         centerRight.close(); 
                         //Set Win=1 
                       
                     } 
                 } 
                 //Else If User=Right & Comp=Left "You Lose"    
                 else if (b.shot==3) 
                     if (b.cpu==1) 
                     { 
                         //Read From A File For Simple Graphic 
                         fstream rightLeft; 
                         rightLeft.open("rightLeft.txt"); 
                         //Open & Close This Specific Graphic File 
                         if (rightLeft.is_open()) 
                         { 
                             string temp; 
                             while(getline(rightLeft,temp)) 
                             cout<<temp<<endl; 
                             cout<<endl; 
                             cout<<"GoaLLLL!!!..."<<endl; 
                             
                             cout<<endl; 
                         } 
                         rightLeft.close(); 
                         //Set Loss=0 
                        
                     } 
                     //Else If User=Right & Comp=Center "You Lose" 
                     else if (b.cpu==2) 
                     { 
                         fstream rightCenter; 
                         rightCenter.open("rightCenter.txt"); 
                         if (rightCenter.is_open()) 
                         { 
                             string temp; 
                             while(getline(rightCenter,temp)) 
                             cout<<temp<<endl; 
                             cout<<endl; 
                             cout<<"GoaLLLL!!!..."<<endl; 
                           
                             cout<<endl; 
                         } 
                         rightCenter.close(); 
                         //Set Loss=0 
                        
                     } 
                     //Else If User=Right & Comp=Right "You Win" 
                     else 
                     { 
                         fstream rightRight; 
                         rightRight.open("rightRight.txt"); 
                         if (rightRight.is_open()) 
                         { 
                             string temp; 
                             while(getline(rightRight,temp)) 
                             cout<<temp<<endl; 
                             cout<<endl; 
                             cout<<"They Blocked Your Shot!!"<<endl; 
                            
                             cout<<endl; 
                              
                         } 
                         rightRight.close(); 
                         //Set Win=1 
                     }
    
     }
   
       }
             
             }
             int size=1;
             User y=fillArrays(size);
             
               
         
      delete y.total;      
     return 0;
}
User userLocation (){ 
 //User Location Variable    
    User a;

 //Do While Loop For User Location Input 
    
     cout<<"Choose A Shot Location From The Following: "<<endl 
         <<"[1] Position: Left  "<<endl 
        <<"[2] Position: Center "<<endl 
         <<"[3] Position: Right  "<<endl;  
     cout<<"Type Anything Else To Forfeit Shot"<<endl;
     cout<<"Enter A Position:  "; 
     cin>>a.shot; 

 //Return User Entry 
 return a; 
 } 
void info(User *s ){
  
    //Prompt User for Name 
     cout<<"what is Your First Name:  "; 
     cin>>s->name; 
     
    //Enter 3 Character Nation  EX:(usa) 
     cout<<"what is Your Country of Nationalization?: (XXX)  "; 
    cin>>s->xxx; 
}
void country (User *t){
//Set Random Seed Country Generator 
     srand(time(0)); 
    //Random Country Generator Display Any of 5 Country's 
     short choose = rand()%5; 

 
     //String Array of 5 Country's With Professional Soccer Teams 
    string List[5]={"Mexico","Canada","Italy","Germany","Spain"}; 
 
 
     //Variable To Display Random Country Name  
    t->country = List[choose]; 
}

void shot (User &g){
  
     //Set Random Seed For Shot Generator 
   srand(static_cast<unsigned int>(time(0))); 
 
   //Set Computer Shot Location to Random 
   g.cpu=rand()%3+1;  
}
User fillArrays(int n){ 
     //Declare an array 
     User array; 
     //Initialize the data 
     array.total=new int[n];
     cout<<"enter your round score"<<endl;
     //Initialize with  
     for(int i=0;i<n;i++){ 
       cin>>array.total[i];
       
       if(array.total[i]<=0){
           cout<<"no bueno";
       }
        
       else if(array.total[i]>=1&&array.total[i]<20){
           cout<<"average"<<endl;
       
       
       }  
       else 
           cout<<"Are you a professional ? ";
           
    } 
     return array; 
 } 

