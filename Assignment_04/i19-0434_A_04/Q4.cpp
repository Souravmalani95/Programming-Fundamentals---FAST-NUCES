#include <iostream>
#include <string>
#include<iomanip>
using namespace std;
int main()
{
//i19-0434 --- Sourav Malani
string student_name;
int N_students,N_quiz,N_assignments,rows=0,cols,i,j;
cout<<"Enter number of students:";
cin>>N_students;
//Validation.
while (N_students<0){
    cout<<"ENTER A POSITIVE INTEGER:"<<":";
    cin>>N_students;      
}

cout<<"Enter total number of quizes:";
cin>>N_quiz;
//Validation.
while (N_quiz<0){
    cout<<"ENTER A POSITIVE INTEGER:"<<":";
    cin>>N_quiz;      
}

cout<<"Enter total number of Assignments:";
cin>>N_assignments;
//Validation.
while (N_assignments<0){
    cout<<"ENTER A POSITIVE INTEGER:"<<":";
    cin>>N_assignments;      
}
string students[2][N_students]; //Names and reg numbers.
double mids[N_students],Finals[N_students];    //Mid and Final marks
int quiz[N_quiz][N_students];        //Quizes
int assignments[N_assignments][N_students];  //Assignments
char GPA[N_students];
int grade[N_students];
//Taking inputs of reg # and names.
for(cols=0;cols<N_students;cols++){
   for(rows=0;rows<1;rows++){
   	cout<<"Enter the name of student #"<<cols+1<<":";
   	cin>>students[rows][cols];
	cout<<"Enter the roll # of student #"<<cols+1<<":";
        cin>>students[rows+1][cols];
   
   }
}
//Taking inputs of mid and final marks.
for(cols=0;cols<N_students;cols++){
   student_name=students[0][cols];
   cout<<"Enter the mid marks of "<<student_name<<":";
   cin>>mids[cols];
   //Validation.
   while (mids[cols]<0){
   	cout<<"MARKS MUST BE POSITIVE:"<<":";
   	cin>>mids[cols];      
   }
   cout<<"Enter the final marks of "<<student_name<<":";
   cin>>Finals[cols];
   //Validation.
   while (Finals[cols]<0){
   	cout<<"MARKS MUST BE POSITIVE:"<<":";
   	cin>>Finals[cols];      
   }

}
//ASSIGNMENTS INPUT
for(cols=0;cols<N_students;cols++){
   for(rows=0;rows<N_assignments;rows++){
        if (rows==0)
           student_name=students[rows][cols];   
   	cout<<"Assignment# "<<rows+1<<" marks of "<<student_name<<":"; //check
    cin>>assignments[rows][cols];
    //Validation.
    while (assignments[rows][cols]<0){
         cout<<"ENTER A POSITIVE INTEGER:"<<":";
         cin>>assignments[rows][cols];      
    }  
   }
}
//QUIZ INPUT
for(cols=0;cols<N_students;cols++){
    for(rows=0;rows<N_quiz;rows++){
        if (rows==0)
           student_name=students[rows][cols];   
     cout<<"Quiz# "<<rows+1<<" marks of "<<student_name<<":";
     cin>>quiz[rows][cols];
    //Validation.
    while (quiz[rows][cols]<0){
         cout<<"ENTER A POSITIVE INTEGER:"<<":";
         cin>>quiz[rows][cols];      
    }  
    
   }
}
double FinalScores[N_students]={};
//Final marks calculations.
for(cols=0;cols<N_students;cols++){
   double quiz_marks=0,assignment_marks=0;
   for(rows=0;rows<N_students;rows++){
   FinalScores[cols]+=(mids[cols])*.25; //Mids    
   for(rows=0;rows<N_quiz;rows++)        //Quizes  
      quiz_marks+=quiz[rows][cols];   
   FinalScores[cols]+=(quiz_marks/(N_quiz*10))*100*0.10;   

   for(rows=0;rows<N_assignments;rows++)        //Assignments  
      assignment_marks+=assignments[rows][cols];  
   FinalScores[cols]+=(assignment_marks/(N_assignments*10))*100*0.15;       
   FinalScores[cols]+=((Finals[cols])/2);        //Finals.
   }
}
//Grade Assigning...
string grades[N_students]={};
double points[N_students]={};
for(i=0;i<N_students;i++){
     if (FinalScores[i]>=90){
	  grades[i]="A+";
          points[i]=4; 
     }     
     else if (FinalScores[i]>=86){
	  grades[i]="A";
          points[i]=4; 
     }
     else if (FinalScores[i]>=82){
	  grades[i]="A-";
          points[i]=3.67; 
     }
     else if (FinalScores[i]>=78){
	  grades[i]="B+";
          points[i]=3.33; 
     }
     else if (FinalScores[i]>=74){
	  grades[i]="B";
          points[i]=3; 
     }
     else if (FinalScores[i]>=70){
	  grades[i]="B-";
          points[i]=2.67; 
     }
     else if (FinalScores[i]>=66){
	  grades[i]="C+";
          points[i]=2.33; 
     }
     else if (FinalScores[i]>=62){
	  grades[i]="C";
          points[i]=2; 
     }
     else if (FinalScores[i]>=58){
	  grades[i]="C-";
          points[i]=1.67; 
     }
     else if (FinalScores[i]>=54){
	  grades[i]="D+";
          points[i]=1.33; 
     }
     else if (FinalScores[i]>=50){
	  grades[i]="D";
          points[i]=1; 
     }
     else{
	  grades[i]="F";
          points[i]=0;
     }
}
cout<<endl<<"Reg. No	     ";
for(i=0;i<N_students;i++)
   cout<<students[1][i]<<"	     "; 
cout<<endl<<"Mids	       ";
for(i=0;i<N_students;i++)
   cout<<mids[i]<<"	       ";

cout<<endl;

for(cols=0;cols<N_students;cols++){
    cout<<"Quiz #"<<cols+1<<"	      ";
    for(rows=0;rows<N_quiz;rows++){
        cout<<quiz[rows][cols]<<" 	           ";    
   }
   cout<<endl;
}

for(cols=0;cols<N_students;cols++){
    cout<<"Assign #"<<cols+1<<"	   ";
    for(rows=0;rows<N_assignments;rows++){
        cout<<assignments[rows][cols]<<"	        ";    
   }
   cout<<endl;
}
cout<<"Final_E    	  ";
for(i=0;i<N_students;i++)
   cout<<Finals[i]<<"	         ";
cout<<endl<<"Final_S    	  ";
for(i=0;i<N_students;i++)
   cout<<FinalScores[i]<<" 	    ";
cout<<endl<<"Grade      	  ";
for(i=0;i<N_students;i++)
   cout<<grades[i]<<"	         ";

cout<<endl;
 

//Alternative grades of best 4 Quizes.               
return 0;
}
