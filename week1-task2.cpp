#include <iostream>
using namespace std;
int main(){
string studentName;
float theoryMarks;
float practicalMarks;
float averageScore;
//student details
cout<<"====student details==="<<endl;
cout<<"student name:";
cin>>studentName;
cout<<"Theory marks:";
cin>>theoryMarks;
cout<<"practical Marks:";
cin>>practicalMarks;

averageScore=theoryMarks+practicalMarks;
cout<<"===STUDENT RESULTS==="<<endl;
cout<<"STUDENT NAME:"<<studentName<<endl;
cout<<"STUDENT THEORY MARKS:"<<theoryMarks<<endl;
cout<<"STUDENT PRACTICAL MARKS:"<<practicalMarks<<endl;
cout<<"STUDENT AVERAGE SCORE:"<<averageScore<<endl;
if(averageScore>=50){
  cout<<"student has passed";
}
else{
 cout<<"studet has not passed";
}








return 0;}
