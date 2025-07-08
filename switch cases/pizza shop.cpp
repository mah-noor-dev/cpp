#include<iostream>
using namespace std;

int main()
{
	char choice;
	float price;
	int pq,bq,sq;
	char ch,ch1;

	
	
	pq=bq=sq=0;
	
	cout<<"\n \t\t \"\"B for Burger\"\" \n \t\t \"\"P for Pizza\"\" \n \t\t \"\"S for Salad\"\"\n";
	
loop:
cout<<"\n\n\t Enter Your choice from above menu:\t";
	cin>>choice;

	switch(choice)
	{
	    case 'b':
		case 'B':
		bq++;
		break;
		case 'p':
		case 'P':
		pq++;
		break;
		case 's':
		case 'S':
		sq++;
		break;
		
		default:
		cout<<"\t you have entered Invalid choice"<<endl;
		goto loop;
	}

yesno:
cout<<"\t do you want to purchase anything else Y/N: \t ";
cin>>ch;



if(ch=='y'||ch=='Y')
goto loop;
else
if(ch!='N'&&ch!='n')
{
cout<<"\t You have choosen wrong option: "<<ch<<"\n";
goto yesno;
}
price= (pq*3000+bq*500+sq*100);
cout<<"\n\tTotal Bill you to pay is : "<<price<<"\n\n";
		
	return 0;
}
