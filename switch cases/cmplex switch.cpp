#include<iostream>
using namespace std;
int main (){
	char op;
	float money,tbill,tbilla,bill,quantity,quantity1;
	float billa=0.0;
	cout<<" SALAM ! HELLO WELCOME : ";
	cout<<" enter your money : "<<endl;
		cin>>money;
		cout<<" Enter your choice(B for Burger, P for Pizza, S for Salad) and E for Exit or end\t"<<endl;
	cout<<" prices : "<<endl<<	"	burger : 450/rs.\n	pizza : 1100/rs	\n	salad : 500/rs"<<endl;
	cin>>op;
	cout<<" quantity plz : "<<endl;
	cin>>quantity1;
	if(op=='p'|| op=='P'){
	float a=1100.0*quantity1;
	billa+=a;
	}
	else if(op=='b'|| op=='B'){
	float a=450.0*quantity1;
	billa+=a;
	}
	else if(op=='S'|| op=='s'){
	float a=500.0*quantity1;
	billa+=a;
	}
	else{
		cout<<"invalid";
	}
Again:
	
	cout<<" you want something else : \n KINDLY enter the option  ";
	cin>>op;
		
	switch (op){
		case 'B':
			case 'b':
				cout<<" BURGERRRRRRRRR.\n ";
				cout<<" quantity plz :	";
				cin>>quantity;
				bill=quantity*450.0;
				billa+=bill;
				
				break;
			
			case 'P':
				case 'p':
					cout<<"pitzzzzzzzzzzaaaaaaaaaaaaa.";
			
					cout<<" quantity plz :	";
						cin>>quantity;
						bill=quantity*1100.0;
							billa+=bill;
					break;
			
				case 'S':
					case 's':
						cout<<" SALAAAAAAAAAAAAAAAAAAAAAAD'";
							cout<<" quantity plz :	";
				cin>>quantity;
					
						bill=quantity*500.0;
							billa+=bill;
						break;
					
					case 'E':
						case 'e':
							cout<<" exitttttttttt.";
								
							break;
						
						default :
							cout<<" invaliddddddddddddd.";
							
								
							break;
						
	}
	if(op!='E' && op!='e'){
		goto Again;
	}
else{

cout<<" taxes  : 150 /rs.";
tbilla=billa+150.0;
cout<<" your total bill is :"<<tbilla<<endl;
if (tbilla<=money){
	cout<<" your returned money "<<money-tbilla;
	cout<<"THANKU FOR YOUR VISIT .\n";
cout<<" HAVE FUN .!";
}
else{
	cout<<" your money isnt enough . sorry !";
}
}
return 0;
}
