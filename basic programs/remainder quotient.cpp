#include<iostream>
using namespace std;
int main(){
	int divident,divisor,quotient,remainder;
	cout<<" enter divident: "<<endl;
	cin>>divident;
	cout<<" enter divisor : "<<endl;
	cin>>divisor;
	quotient=divident/divisor;
	remainder=divident%divisor;
	cout<<" quotient is : "<<quotient<<endl;
	cout<<" remainder is : "<<remainder<<endl;
	return 0;
	}
