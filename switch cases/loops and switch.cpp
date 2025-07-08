#include<iostream>
using namespace std;

int main()
{
	char choice;
	int money,quantity, purchase;
	float returnback,total_bill;
	
	do{
	
	cout<<"Enter your choice(B for Burger, P for Pizza, S for Salad) and E for Exit or end \t";
	cin>>choice;
	
	
	
	switch(choice)
	{
		case 'B':
			
			cout<<"price of burger is 5 \n";
		
		continue;
		
		case 'P':
			
			cout<<"price of pizza is 7\n";
		continue;
		
		case 'S':
		
			cout<<"Price of salad is 10\n";
		continue;
		
		case 'E':
		cout<<"Exit";
		continue;
		
		default:
		cout<<"Invalid choice";
		continue;
	}
		
	}	while(choice !='E');
	
	
	
	
	return 0;
}
