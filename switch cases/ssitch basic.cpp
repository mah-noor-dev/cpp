#include<iostream>
using namespace std;
int main (){
	char op;
do{
	cout<<" Enter your choice(B for Burger, P for Pizza, S for Salad) and E for Exit or end";
	cin>>op;
	switch (op){
		case 'B':
			case 'b':{
				cout<<" BURGERRRRRRRRR. ";
				continue;
			}
			case 'P':
				case 'p':{
					cout<<"pitzzzzzzzzzzaaaaaaaaaaaaa.";
					continue;
				}
				case 'S':
					case 's':{
						cout<<" SALAAAAAAAAAAAAAAAAAAAAAAD'";
						continue;
					}
					case 'E':
						case 'e':{
							cout<<" exitttttttttt.";
							break;
						}
						default :{
							cout<<" invaliddddddddddddd.";
							continue;
						}
	}
} while (op !='E'|| op !='e');
return 0;
}
