/*Write a program that input quantity of 5 products purchased by customer and calculate total bill. Program should 
ask quantity of each product one by one using product name. Prices of products are given below:
? Cocacola RS150
? Dairy Milk RS100
? Peanut Cookies RS30
? Wafer RS20
? Kurkure RS50*/
#include<iostream>
using namespace std;
int main(){
	int a,b,c,d,e,f;
	cout << " HERE's THE MENU : "<<endl;
	cout<<"Cocacola RS150"<<endl;
cout<<" Dairy Milk RS100"<<endl;
 cout<<"Peanut Cookies RS30"<<endl;
cout<<"Wafer RS20"<<endl;
cout<<"Kurkure RS50"<<endl;
cout<<endl<<endl;
cout<<"how much cocacola bottles . quantity  :"<<endl;
cin>>a;
a=a*150;
cout<<"how much dairy milk. quantity  :"<<endl;
cin>>b;
b=b*100;
cout<<"how much peanut cookies . quantity  :"<<endl;
cin>>c;
c=c*30;
cout<<"how much wafer. quantity  :"<<endl;
cin>>d;
d=d*20;
cout<<"how much kurkury . quantity  :"<<endl;
cin>>e;
e=e*50;
int total=a+b+c+d+e;
cout<<" your total bill is : "<<total<<endl;
cout<<" MAH NOOR     FA23-BCS-332 ";
return 0;


	}
