#include<iostream>
using namespace std;
int main(){
	char option;
	float a;
	float price;
	float n;
	cout<<" hello there ! welcome."<<endl<<" presenting you the menu : "<<endl;
	cout<<" kindly enter the option from the following menu:";
	cout<<" A. burger($5.99)"<<endl<<"B. pizza($6.99)"<<endl<<" C. salad($7.99)"<<endl;
	cout<<" enter your money : ";
	cin>>a;
	cout<<" enter your option";
	cin>>option;
	cout<<" the quantity of your option";
	cin>>n;
	switch(option){
		case'A':{
			cout<<" you have selected a burger price $5.99"<<endl;
			n=n*5.99;
			if(a>=n){
			
			price=a-n;
			cout<<" your returned money :"<<price;}
			else{
				cout<<" not enough money.";
			}
			break;
		}
		case'B':{
			cout<<"you have selected a pizza price $6.99  "<<endl;
		n=n*6.99;
			if(a>=n){
					price=a-n;
			cout<<"your returned money : "<<price;}
			else{
				cout<<" not enough money";
			}
			
			break;
		}
		case 'c':{
			cout<<"you have selected a salad price $7.99 "<<endl;
		n=n*7.99;
		if(a>=n){
					price=a-n;
			cout<<"your returned money : "<<price;}
			else{
				cout<<" not enough money.";
			}
			break;
		}
		default:{
			cout<<"invalid option .";
			break;
		}
		
	}
	cout<<endl<<" MAH NOOR      332";
	return 0;

}
