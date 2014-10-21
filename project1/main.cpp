
1 /*  
2 * File:   main.cpp 
3 * Author: Tony Reyes 
4 * July, 21 2014 
5 * Purpose: CSC-5 Project 1 Soccer: World Cup Fever ; Penalty Kicks 
6 */ 
7 
 
8 //System Libraries 
9 #include <iostream> 
10 #include <string> 
11 #include<ctime> 
12 #include<cstdlib> 
13 #include<fstream> 
14 #include<iomanip> 
15 using namespace std; 
16 
 
17 //User Libraries 
18 
 
19 //Global Constants 
20 
 
21 //Function Prototypes 
22 void intro (); 
23 int userLocation (); 
24 void print(int the[5][2],int sizeRow,int sizeCol); 
25 void myRank(int &goals, int &block); 
26 int topPlay(int goals, int block, int draw=0); 
27 //Execution Starts Here! 
28 int main(int argc, char** argv){ 
29 
 
30     //Declare Variables & Initialize Entries 
31     //Inputs 
32     string name;    //User First Name Variable 
33     char count[3];  //User Country Initials   
34     int useRnk; 
35     int goal=0,blk=0; 
36     //Display Introduction of Game 
37     intro(); 
38     cout<<endl; 
39 
 
40     //Prompt User for Name 
41     cout<<"what is Your First Name:  "; 
42     cin>>name; 
43     
44     //Enter 3 Character Nation  EX:(usa) 
45     cout<<"what is Your Country of Nationalization?: (XXX)  "; 
46     cin>>count; 
47     cout<<endl; 
48      
49     //Set Random Seed Country Generator 
50     srand(time(0)); 
51 
 
52     //Random Country Generator Display Any of 5 Country's 
53     short choose = rand()%5; 
54 
 
55     //String Array of 5 Country's With Professional Soccer Teams 
56     string List[5]={"Mexico","Canada","Italy","Germany","Spain"}; 
57 
 
58     //Variable To Display Random Country Name  
59     string word = List[choose]; 
60      
61     //Beginning Of Game Boolean Loop 
62     bool loop=true; 
63 
 
64     //For Loop for Number of Rounds To Be Played  
65     for (int win =0;win<5;win++) 
66     { 
67         //Do-While Loop For Both Scenario Implementation* (GAME LENGTH) 
68         do{ 
69 
 
70             //Display Output of Random Opponent 
71             cout<<count<<"'VS'"<<word<<endl; 
72             cout<<endl; 
73             //Display Option To Play as Keeper or Scorer 
74             cout<<"Type 1 to Play as Goal Keeper: "<<endl; 
75             cout<<"Type 2 to Play as  Goal Scorer: "<<endl; 
76             cout<<"Type Anything Else To Forfeit Round"<<endl; 
77             //Read the choice 
78             char choice; 
79             cin>>choice; 
80             cout<<endl; 
81              
82             //Choose Either Keeper/Scorer VS. Computer 
83             switch(choice){ 
84 
 
85             //Play as Keeper; First Simulation 
86             case'1':{ 
87 
 
88                 //Instruct User About Scenario 
89                 cout<<"Block Your Opponent's Shot "<<endl; 
90                 cout<<"__________________________"<<endl; 
91 
 
92                 //Declare Variables & Initialize Entries 
93                 //Inputs 
94                 unsigned short keep,shot;        //Variables of Scorer or Keeper 
95                 short wins;                      //1 point for win 
96 
 
97                 //Set Random Seed For Shot Generator 
98                 srand(static_cast<unsigned int>(time(0))); 
99 
 
100                 //Set Computer Shot Location to Random 
101                 keep=rand()%3+1; 
102                  
103                 //Use Function for User Location 
104                 shot=userLocation(); 
105 
 
106                 //Set Up Parameters of Goal or No Goal 
107 
 
108                 //If User=Left & Comp=Left "You Win" 
109                 if (shot==1) 
110                 { 
111                     if(keep==1) 
112                     { 
113                         //Read From A File For Simple Graphic  
114                        fstream leftLeft; 
115                         leftLeft.open("leftLeft.txt"); 
116                         //Open & Close This Specific Graphic File 
117                         if (leftLeft.is_open()) 
118                         { 
119                             string temp; 
120                             while(getline(leftLeft,temp)) 
121                             cout<<temp<<endl; 
122                             cout<<endl; 
123                             cout<<"You Blocked The Shot!"<<endl; 
124                             cout<<count<<":Gets Point"<<endl; 
125                             cout<<endl; 
126                         } 
127                         leftLeft.close(); 
128                         //Set Win=1 
129                         wins=1; 
130                     } 
131                     //If User=Left & Comp=Center "You Lose" 
132                     else if (keep==2) 
133                     { 
134                         //Read From A File For Simple Graphic  
135                         fstream leftCenter; 
136                         leftCenter.open("leftCenter.txt"); 
137                         //Open & Close This Specific Graphic File 
138                         if (leftCenter.is_open()) 
139                         { 
140                             string temp; 
141                             while(getline(leftCenter,temp)) 
142                             cout<<temp<<endl; 
143                             cout<<endl; 
144                             cout<<"They Scored A Goal..."<<endl; 
145                             cout<<word<<":Gets Point"<<endl; 
146                             cout<<endl; 
147                         } 
148                         leftCenter.close(); 
149                         //Set Loss=0 
150                         wins=0; 
151                     } 
152                     //Else User=Left & Comp=Right "You Lose" 
153                     else 
154                     { 
155                         //Read From A File For Simple Graphic  
156                         fstream leftRight; 
157                         leftRight.open("leftRight.txt"); 
158                         //Open & Close This Specific Graphic File 
159                         if (leftRight.is_open()) 
160                         { 
161                             string temp; 
162                             while(getline(leftRight,temp)) 
163                             cout<<temp<<endl; 
164                             cout<<endl; 
165                             cout<<"They Scored A Goal..."<<endl; 
166                             cout<<word<<":Gets Point"<<endl; 
167                             cout<<endl; 
168                         } 
169                         leftRight.close(); 
170                         //Set Loss=0 
171                         wins=0; 
172                     } 
173                 }  
174                 //Else If User=Center & Comp=Left "You Lose" 
175                 else if (shot==2) 
176                 { 
177                     if (keep==1) 
178                     { 
179                         //Read From A File For Simple Graphic  
180                         fstream centerLeft; 
181                         centerLeft.open("centerLeft.txt"); 
182                         //Open & Close This Specific Graphic File 
183                         if (centerLeft.is_open()) 
184                         { 
185                             string temp; 
186                             while(getline(centerLeft,temp)) 
187                             cout<<temp<<endl; 
188                             cout<<endl; 
189                             cout<<"They Scored A Goal..."<<endl; 
190                             cout<<word<<":Gets Point"<<endl; 
191                             cout<<endl; 
192                         } 
193                         centerLeft.close(); 
194                         //Set Loss=0 
195                         wins=0; 
196                     } 
197                     //Else If User=Center & Comp=Center "You Win" 
198                     else if(keep==2) 
199                     { 
200                         //Read From A File For Simple Graphic  
201                         fstream centerCenter; 
202                         centerCenter.open("centerCenter.txt"); 
203                         //Open & Close This Specific Graphic File 
204                         if (centerCenter.is_open()) 
205                         { 
206                             string temp; 
207                             while(getline(centerCenter,temp)) 
208                             cout<<temp<<endl; 
209                             cout<<endl; 
210                             cout<<"You Blocked The Shot!"<<endl; 
211                             cout<<count<<":Gets Point"<<endl; 
212                             cout<<endl; 
213                         } 
214                         centerCenter.close(); 
215                         //Set Win=1 
216                         wins=1; 
217                     } 
218                     //Else If User=Center & Comp=Right "You Win"     
219                     else 
220                     { 
221                         //Read From A File For Simple Graphic 
222                         fstream centerRight; 
223                         centerRight.open("centerRight.txt"); 
224                         //Open & Close This Specific Graphic File 
225                         if (centerRight.is_open()) 
226                         { 
227                             string temp; 
228                             while(getline(centerRight,temp)) 
229                             cout<<temp<<endl; 
230                             cout<<endl; 
231                             cout<<"They Scored A Goal..."<<endl; 
232                             cout<<word<<":Gets Point"<<endl; 
233                             cout<<endl; 
234                         } 
235                         centerRight.close(); 
236                         //Set Win=1 
237                         wins=0; 
238                     } 
239                 } 
240                 //Else If User=Right & Comp=Left "You Lose"    
241                 else if (shot==3) 
242                     if (keep==1) 
243                     { 
244                         //Read From A File For Simple Graphic 
245                         fstream rightLeft; 
246                         rightLeft.open("rightLeft.txt"); 
247                         //Open & Close This Specific Graphic File 
248                         if (rightLeft.is_open()) 
249                         { 
250                             string temp; 
251                             while(getline(rightLeft,temp)) 
252                             cout<<temp<<endl; 
253                             cout<<endl; 
254                             cout<<"They Scored A Goal..."<<endl; 
255                             cout<<word<<":Gets Point"<<endl; 
256                             cout<<endl; 
257                         } 
258                         rightLeft.close(); 
259                         //Set Loss=0 
260                         wins=0; 
261                     } 
262                     //Else If User=Right & Comp=Center "You Lose" 
263                     else if (keep==2) 
264                     { 
265                         fstream rightCenter; 
266                         rightCenter.open("rightCenter.txt"); 
267                         if (rightCenter.is_open()) 
268                         { 
269                             string temp; 
270                             while(getline(rightCenter,temp)) 
271                             cout<<temp<<endl; 
272                             cout<<endl; 
273                             cout<<"They Scored A Goal..."<<endl; 
274                             cout<<word<<":Gets Point"<<endl; 
275                             cout<<endl; 
276                         } 
277                         rightCenter.close(); 
278                         //Set Loss=0 
279                         wins=0; 
280                     } 
281                     //Else If User=Right & Comp=Right "You Win" 
282                     else 
283                     { 
284                         fstream rightRight; 
285                         rightRight.open("rightRight.txt"); 
286                         if (rightRight.is_open()) 
287                         { 
288                             string temp; 
289                             while(getline(rightRight,temp)) 
290                             cout<<temp<<endl; 
291                             cout<<endl; 
292                             cout<<"You Blocked The Shot!"<<endl; 
293                             cout<<count<<":Gets Point"<<endl; 
294                             cout<<endl; 
295                              
296                         } 
297                         rightRight.close(); 
298                         //Set Win=1 
299                         wins=1; 
300                     } 
301                     //Display Output Of Winner For Each Round 
302                     if (wins==1) 
303                     { 
304                         cout<<"You Win Round"<<endl; 
305                     } 
306                     else if (wins==0) 
307                     { 
308                         cout<<"You Lose Round"<<endl; 
309                     } 
310                         
311             } 
312             case'2':{ 
313                 //Instruct User About Scenario 
314                 cout<<"It's Time To Shoot A Goal For Your Country! "<<endl; 
315                 cout<<"____________________________________________"<<endl; 
316                 cout<<endl; 
317                  
318                 //Declare Variables & Initialize Entries 
319                 //Inputs 
320                 unsigned short keep,shot;        //Variables of Scorer or Keeper 
321                 short wins;                      //1 point for win 
322 
 
323                 //Set Random Seed For Shot Generator 
324                 srand(static_cast<unsigned int>(time(0))); 
325 
 
326                 //Set Computer Shot Location to Random 
327                 keep=rand()%3+1; 
328                  
329                 //Use Function for User Location 
330                 shot=userLocation(); 
331 
 
332                 //Set Up Parameters of Goal or No Goal 
333 
 
334                 //If User=Left & Comp=Left "You Win" 
335                 if (shot==1) 
336                 { 
337                     if(keep==1) 
338                     { 
339                         //Read From A File For Simple Graphic  
340                        fstream leftLeft; 
341                         leftLeft.open("leftLeft.txt"); 
342                         //Open & Close This Specific Graphic File 
343                         if (leftLeft.is_open()) 
344                         { 
345                             string temp; 
346                             while(getline(leftLeft,temp)) 
347                             cout<<temp<<endl; 
348                             cout<<endl; 
349                             cout<<"They Blocked Your Shot!"<<endl; 
350                             cout<<word<<":Gets Point"<<endl; 
351                             cout<<endl; 
352                         } 
353                         leftLeft.close(); 
354                         //Set Win=1 
355                         wins=0; 
356                     } 
357                     //If User=Left & Comp=Center "You Lose" 
358                     else if (keep==2) 
359                     { 
360                         //Read From A File For Simple Graphic  
361                         fstream leftCenter; 
362                         leftCenter.open("leftCenter.txt"); 
363                         //Open & Close This Specific Graphic File 
364                         if (leftCenter.is_open()) 
365                         { 
366                             string temp; 
367                             while(getline(leftCenter,temp)) 
368                             cout<<temp<<endl; 
369                             cout<<endl; 
370                             cout<<"You Scored A Goal For:"<<count<<"!"<<endl; 
371                             cout<<count<<":Gets Point"<<endl; 
372                             cout<<endl; 
373                         } 
374                         leftCenter.close(); 
375                         //Set Loss=0 
376                         wins=1; 
377                     } 
378                     //Else User=Left & Comp=Right "You Lose" 
379                     else 
380                     { 
381                         //Read From A File For Simple Graphic  
382                         fstream leftRight; 
383                         leftRight.open("leftRight.txt"); 
384                         //Open & Close This Specific Graphic File 
385                         if (leftRight.is_open()) 
386                         { 
387                             string temp; 
388                             while(getline(leftRight,temp)) 
389                             cout<<temp<<endl; 
390                             cout<<"You Scored A Goal For:"<<count<<"!"<<endl; 
391                             cout<<count<<":Gets Point"<<endl; 
392                             cout<<endl; 
393                         } 
394                         leftRight.close(); 
395                         //Set Loss=0 
396                         wins=1; 
397                     } 
398                 }  
399                 //Else If User=Center & Comp=Left "You Lose" 
400                 else if (shot==2) 
401                 { 
402                     if (keep==1) 
403                     { 
404                         //Read From A File For Simple Graphic  
405                         fstream centerLeft; 
406                         centerLeft.open("centerLeft.txt"); 
407                         //Open & Close This Specific Graphic File 
408                         if (centerLeft.is_open()) 
409                         { 
410                             string temp; 
411                             while(getline(centerLeft,temp)) 
412                             cout<<temp<<endl; 
413                             cout<<"You Scored A Goal For:"<<count<<"!"<<endl; 
414                             cout<<count<<":Gets Point"<<endl; 
415                             cout<<endl; 
416                         } 
417                         centerLeft.close(); 
418                         //Set Loss=0 
419                         wins=1; 
420                     } 
421                     //Else If User=Center & Comp=Center "You Win" 
422                     else if(keep==2) 
423                     { 
424                         //Read From A File For Simple Graphic  
425                         fstream centerCenter; 
426                         centerCenter.open("centerCenter.txt"); 
427                         //Open & Close This Specific Graphic File 
428                         if (centerCenter.is_open()) 
429                         { 
430                             string temp; 
431                             while(getline(centerCenter,temp)) 
432                             cout<<temp<<endl; 
433                             cout<<endl; 
434                             cout<<"They Blocked Your Shot!"<<endl; 
435                             cout<<word<<":Gets Point"<<endl; 
436                             cout<<endl; 
437                         } 
438                         centerCenter.close(); 
439                         //Set Win=1 
440                         wins=0; 
441                     } 
442                     //Else If User=Center & Comp=Right "You Win"     
443                     else 
444                     { 
445                         //Read From A File For Simple Graphic 
446                         fstream centerRight; 
447                         centerRight.open("centerRight.txt"); 
448                         //Open & Close This Specific Graphic File 
449                         if (centerRight.is_open()) 
450                         { 
451                             string temp; 
452                             while(getline(centerRight,temp)) 
453                             cout<<temp<<endl; 
454                             cout<<"You Scored A Goal For:"<<count<<"!"<<endl; 
455                             cout<<count<<":Gets Point"<<endl; 
456                             cout<<endl; 
457                         } 
458                         centerRight.close(); 
459                         //Set Win=1 
460                         wins=1; 
461                     } 
462                 } 
463                 //Else If User=Right & Comp=Left "You Lose"    
464                 else if (shot==3) 
465                     if (keep==1) 
466                     { 
467                         //Read From A File For Simple Graphic 
468                         fstream rightLeft; 
469                         rightLeft.open("rightLeft.txt"); 
470                         //Open & Close This Specific Graphic File 
471                         if (rightLeft.is_open()) 
472                         { 
473                             string temp; 
474                             while(getline(rightLeft,temp)) 
475                             cout<<temp<<endl; 
476                             cout<<"You Scored A Goal For:"<<count<<"!"<<endl; 
477                             cout<<count<<":Gets Point"<<endl; 
478                             cout<<endl; 
479                         } 
480                         rightLeft.close(); 
481                         //Set Loss=0 
482                         wins=1; 
483                     } 
484                     //Else If User=Right & Comp=Center "You Lose" 
485                     else if (keep==2) 
486                     { 
487                         fstream rightCenter; 
488                         rightCenter.open("rightCenter.txt"); 
489                         if (rightCenter.is_open()) 
490                         { 
491                             string temp; 
492                             while(getline(rightCenter,temp)) 
493                             cout<<temp<<endl; 
494                             cout<<"You Scored A Goal For:"<<count<<"!"<<endl; 
495                             cout<<count<<":Gets Point"<<endl; 
496                             cout<<endl; 
497                         } 
498                         rightCenter.close(); 
499                         //Set Loss=0 
500                         wins=1; 
501                     } 
502                     //Else If User=Right & Comp=Right "You Win" 
503                     else 
504                     { 
505                         fstream rightRight; 
506                         rightRight.open("rightRight.txt"); 
507                         if (rightRight.is_open()) 
508                         { 
509                             string temp; 
510                             while(getline(rightRight,temp)) 
511                             cout<<temp<<endl; 
512                             cout<<endl; 
513                             cout<<"They Blocked Your Shot!"<<endl; 
514                             cout<<word<<":Gets Point"<<endl; 
515                             cout<<endl; 
516                         } 
517                         rightRight.close(); 
518                         //Set Win=1 
519                         wins=0; 
520                     } 
521                     //Display Output Of Winner For Each Round 
522                 
523                     int sums=0; 
524                     if (wins==1) 
525                     { 
526                         cout<<"You Win Round"<<endl; 
527                         sums+=wins; 
528                     } 
529                     else  
530                     { 
531                         cout<<"You Lose Round"<<endl; 
532                         sums+=wins; 
533                     } 
534                 
535                  
536                 } 
537                  
538                  
539                 default:{ 
540                 //Exit Loop  
541                 loop=false; 
542                 break; 
543                 } 
544             }; 
545         }while(loop);//Upper do-while 
546     } 
547     //Call User Ranking Function 
548     myRank(goal,blk); 
549 
 
550     //Display Format For 2 Dimensional Array 
551     cout<<"          Rank # / Total Points (ALL TIME)"<<endl; 
552     cout<<"         _______________________________"<<endl; 
553      
554     //2 Dimensional Array For Top Scores 
555     int myarray [5][2]={{1,5}, 
556                         {2,5}, 
557                         {3,4}, 
558                         {4,4}, 
559                         {5,3}}; 
560     //Call Print Array Function 
561     print(myarray,5,2); 
562     cout<<endl; 
563     //Call All Time Winners Function 
564     topPlay(goal,blk); 
565 
 
566 //Exit Stage Right!     
567 return 0; 
568 } 
569 //Introduction Function 
570 //Displays Rules & General Game Information by Reference 
571 void intro(){ 
572 cout<<"Welcome to World Cup Fever: Penalty Shoot Out!... " 
573 <<"To Play this game some specific information will be asked about " 
574 <<"who you are...You will be asked to select the position " 
575 <<"of either GoalKeeper or GoalScorer...The Computer will Randomly " 
576 <<"Generate a Shot Location or   Guess Your Shot Location... " 
577 <<"You Must Decide To Either Defend or Score Goals...." 
578 <<"Can You Out Smart your Opponent!" 
579 <<"                                                   "<<endl 
580 <<"               _______________________             "<<endl 
581 <<"              |                       |            "<<endl         
582 <<"              |                       |            "<<endl 
583 <<"              |   1       2       3   |            "<<endl         
584 <<"              |                       |            "<<endl         
585 <<"                                                   "<<endl; 
586 } 
587 
 
588 //User Location Function Passed By Value 
589 //pos= Left, Center, Right (Location Choices) 
590 int userLocation (){ 
591 //User Location Variable    
592 int pos; 
593 //Do While Loop For User Location Input 
594 do{ 
595     cout<<"Choose A Shot Location From The Following: "<<endl 
596         <<"[1] Position: Left  "<<endl 
597         <<"[2] Position: Center "<<endl 
598         <<"[3] Position: Right  "<<endl;  
599     cout<<"Enter A Position:  "; 
600     cin>>pos; 
601 }while (pos>3||pos<1); 
602 //Return User Entry 
603 return pos; 
604 } 
605 
 
606 //Top Ranking Players 2 Dimensional Array Passed Through Function 
607 //2 columns = Rank & # Rounds 
608 //5 Rows of Ranked Players 
609 void print(int the[5][2],int sizeRow,int sizeCol) 
610 { 
611     //For Loop For Array Rows 
612     for(int row=0;row<sizeRow;row++) 
613     { 
614         //For Loop For Array Columns 
615         for(int col=0;col<sizeCol;col++) 
616         { 
617             cout<<"            "<<the[row][col]; 
618         } 
619         cout<<endl; 
620     }                            
621     cout<<endl; 
622 } 
623 //User Top rank Function 
624 //goals= Goals Scored  blocks= shots blocked 
625 void myRank(int &goals, int &block ) 
626 {    
627     
628     cout<<"Where Do You Rank Among The Top PLayers? "<<endl; 
629     cout<<endl; 
630     cout<<"Lets Find Out...How Many Goals Did You Score Total During Your Match ? "; 
631     cin>>goals; 
632     cout<<endl; 
633     cout<<"Lets Find Out...How Many Blocks Did You Have Total During Your Match? "; 
634     cin>>block; 
635 } 
636 //All Time Winners Function 
637 //goals= Goals Scored  blocks= shots blocked  draw= 0 Never a Draw (default Parameter)  
638 int topPlay(int goals, int block, int draw) 
639 {   int sum=0; 
640     //Find Total Points Earned 
641     sum=(goals-block); 
642     if(sum>10) 
643     { 
644     cout<<"This Is Where You Stand...You Thought You Were Good... "<<endl; 
645     
646     } 
647     else  
648     { 
649        cout<<"This Is Where You Stand...Not Bad Rookie!... "<<endl;  
650     }  
651     cout<<"You Had:"<<sum<<" :Total Points This Game"<<endl; 
652     return sum; 
653 } 
 


 
   

Status
 API
 Training
 Shop
 Blog
 About
   © 2014 GitHub, Inc.
 Terms
 Privacy
 Security
 Contact
   







  





