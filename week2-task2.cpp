#include <iostream>
using namespace std;
int main(){
    //declaration of variables
string studentName;
int age;
int examScore;
string decision;
//prompt user to input his/her details
cout<<"student name:";
cin>>studentName;
cout<<"student age:";
cin>>age;
cout<<"student exam scores:";
cin>>examScore;
//check conditions
if(age>=18){
    if(examScore>=50){
decision="Admitted";
    }
    else{decision="Notadmitted:LowScore";}}
else{decision="NotAdmitted:underage";
}
//SUMMARY DISPLAY
cout<<"==ADMISSION DECISION=="<<endl;
cout<<"student name:"<<studentName<<endl;
cout<<"student age:"<<age<<endl;
cout<<"student exam scores:"<<examScore<<endl;
cout<<"Final admisson decision:"<<decision<<endl;


return 0;
}
