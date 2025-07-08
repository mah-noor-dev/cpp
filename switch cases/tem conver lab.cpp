/*Create a C++ program that converts temperature between Celsius and Fahrenheit. The program should prompt the user to enter a temperature and then choose whether to convert it from Celsius to Fahrenheit or Fahrenheit to Celsius.

Specifications:

The program should display a welcome message and ask the user to input a temperature.
After receiving the temperature input, the program should present the user with two conversion options:
Celsius to Fahrenheit (denoted as 'C')
Fahrenheit to Celsius (denoted as 'F')
The user should enter their choice ('C' or 'F').
Based on the user's choice, the program should perform the conversion and display the result.
If the user enters an invalid choice, the program should inform them and prompt them to choose again.*/
#include<iostream>
using namespace std;
int main(){
	float a;
	char option;
	cout<<" HELLO ! WELCOME !";
	cout<<" ENTER TEMPERTURE :";
	cin>>a;
	cout<<" if you want to change this celsius temperature to fahrenhite KINDLY ENTER 	F"<<endl;
	cout<<" if you want to change this fahrenhite temperature to celsius KINDLY ENTER 	  C"<<endl;
	cin>>option;
	switch(option){
		case 'F':{
			a=(( (9.0/5.0)*a )+ 32);
			cout<<" your celsius temperature after conversion to fahrenhite is : 	"<<a;
			break;
		}
		case 'C':{
			a=((a - 32)*(5.0/9.0));
			cout<<" your fahrehite temperture after conversion to celsius  is : 	"<<a;
			break;
		}
		default:{
			cout<<" invalid option .";
			break;
		}
	}
return 0;
	
}
