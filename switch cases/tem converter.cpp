#include  <iostream>
using namespace std;
int main (){
	char choice;
	int a,b ;
		cout << " enter 1 for celcius and 2 for fehrehite scale : ";
		cin >> choice ;
	switch (choice){
	
		case 1:{
			cout << " enter temperature : ";
			cin>> a;
			a=(a * 1.5 )+32;
			cout << " temperature of c after conversion is : "<< a<<" fehrehite"<< endl;
			
			break;
		}
		case 2:{
			cout << " enter temperature in fehrenhit : ";
			cin >>b;
			b=(b*0.5 )-32;
			cout << " value of f after conversion is : "<< b<< " celcius "<< endl;
			
			break;
		}
	}
	return 0;
	
}
