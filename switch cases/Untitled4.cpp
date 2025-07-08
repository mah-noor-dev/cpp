#include<iostream>
using namespace std;
int main(){
	float a,totalbill,returnedm;
	char option;
	int n,c;
		cout<<" hello there ! welcome."<<endl<<" presenting you the menu : "<<endl;
	cout<<" kindly enter the option from the following menu:"<<endl<<endl;
	cout<<" 			A. burger($5.99)"<<endl<<"			B. pizza($6.99)"<<endl<<" 			C. salad($7.99)"<<endl;
	cout<<" enter your money : ";
	cin>>money;

	cout<<" enter your option  : 	";
	cin>>option;
	cout<<" the quantity of your option";
	cin>>n;
	switch(option){
		case'A':{
			cout<<" you have selected a burger price $5.99"<<endl<<endl;
			c=n*5.99;
			cout<<" your total bill after ordering "<<n<<" burger is "<<c<<endl<<endl;
			if(a>=c){
			
			totalbill=totalbill+c
			cout<<" your returned money :"<<price<<endl<<endl;
			cout<<" thanku for your order.";}
			else{
				cout<<" not enough money.";
			}
			break;
		}
		case'B':{
			cout<<"you have selected a pizza price $6.99  "<<endl<<endl;
		c=n*6.99;
		cout<<" your total bill after ordering "<<n<<" pizza is "<<c<<endl<<endl;
			if(a>=c){
					price=a-c;
			cout<<"your returned money : "<<price<<endl<<endl;
			cout<<" thanku for your order.";}
			else{
				cout<<" not enough money";
			}
			
			break;
		}
		case 'C':{
			cout<<"you have selected a salad price $7.99 "<<endl<<endl;
		c=n*7.99;
		cout<<" your total bill after ordering "<<n<<" salad is "<<c<<endl<<endl;
		if(a>=c){
					price=a-c;
			cout<<"your returned money : "<<price<<endl<<endl;
			cout<<" thanku for your order.";}
			else{
				cout<<" not enough money.";
			}
			break;
		}
		default:{
			cout<<" item not available. sorry!.";
		goto Again;
			
			break;
		}
		
}
