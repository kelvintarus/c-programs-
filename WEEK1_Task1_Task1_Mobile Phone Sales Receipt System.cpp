#include <iostream>
using namespace std;
int main(){
     // Declare variables
string customerName;
string phonemodel;
int quantityBought;
float pricePerphone;
float totalAmount;
//  customer details
cout<<"customers name:";
cin>>customerName;
cout<<"phone model:";
cin>>phonemodel;
cout<<"quantityBought:";
cin>>quantityBought;
cout<<"price per phone:";
cin>>pricePerphone;
totalAmount=quantityBought*pricePerphone;
cout<<"=================="<<endl;
cout<<"RUIRU'S CUSTOMERS RECEIPT"<<endl;
cout<<"=================="<<endl;
cout<<"customers name:" << customerName <<endl;
cout<<"quantity bought:" << quantityBought <<endl;
cout<<"price per phone:" << pricePerphone <<endl;
cout<<"total amount:"<<totalAmount<<endl;
 cout << "===================================="<<endl;
    cout << "       THANK YOU FOR SHOPPING!"<<endl;
    cout << "===================================="<<endl;



return 0;
}
