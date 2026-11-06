#include <iostream>
using namespace std;
int main(){
// declare variables
string studentName;
float examMarks;
char grade;
cout<<"Enter your name:";
cin>>studentName;
cout<<"Enter marks scored:";
cin>>examMarks;
//using if else statements to assing grades
if(examMarks>=70&&examMarks<=100){grade='A';
}
else if(examMarks>=60&&examMarks<=69){
    grade='B';
}
else if(examMarks>=50&&examMarks<=59){grade='C';
}

else if(examMarks>=40&&examMarks<=49){grade='D';
}
else if(examMarks>=0&&examMarks<=40){grade='E';}
else{
    cout<<"Invalid marks,please restart and enter a value between 0 and 100";
    return 1;}//Exit program due to an invalid input
    //Display the student name, marks, and the corresponding grade
cout<<"==STUDENT REPORT CARD=="<<endl;
cout<<"STUDENT NAME:"<<studentName<<endl;
cout<<"STUDENT EXAM MARKS SCORED:"<<examMarks<<endl;
cout<<"STUDENT FINAL GRADE:"<<grade<<endl;
return 0;}
