#include<iostream>
using namespace std;

int main()
{
	char choice;
	int money,n;
	float returnback,tbill,bill;
	cout<<"Enter your choice(B for Burger(100), P for Pizza(200), S for Salad)(150) and E for Exit or end \t";
	cin>>choice;
	cout<<" quantity :";
	cin>>n;
	cout<<" enter your money :"<<endl;
	cin>>money;
do{

	
	
	switch (choice){
		case 'B':
			case 'b':{
				cout<<" selected "<<n<<" burgers";
				bill=n*100;
				break;
			}
				case 'p':
			case 'P':{
				cout<<" selected "<<n<<" pizzas";
				bill=n*200;
				break;
			}
				case 's':
			case 'S':{
				cout<<" selected "<<n<<"salads";
				bill=n*150;
				break;
			}
			case 'E':
				case 'e':{
					cout<<" exit .";
					break;
				}
				default:{
					"invalid .";
					break;
				}
	}
}
while(choice!='e'|| choice !='E');

tbill=0;
tbill=bill;
cout<<" your total bill is : "<<tbill;
cout<<" your returnable money :"<<money-tbill;
return 0;
}
