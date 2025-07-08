#include<iostream>
using namespace std;
int main(){
/*	Write a program in C++ that inputs number of electricity units consumed and unit price, calculate and prints bill on 
screen*/
float units,price,bill;
cout<<" enter the number of units consumed : "<<endl;
cin>>units;
cout<<" enter the price of one unit in rupees : "<<endl;
cin>>price;
bill=units*price;
cout<<" here is the bill of electricity : "<<bill<<" rupees "<<endl;
cout<<endl;
cout<<" MAH NOOR    : FA23-BCS-332"<<endl;
return 0;


}
