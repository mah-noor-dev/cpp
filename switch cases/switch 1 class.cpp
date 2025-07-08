#include<iostream>
using namespace std;
int main (){
	int a,b;
	char oper;
	cout<<" enter the value of a and b :"<<endl;
	cin>>a>>b;
	cout<<" enter operation (+ , -,*,/)";
	cin>>oper;
	switch (oper){
		case '+':{
			cout<<" sum = "<<a+b;
			break;
		}
		case '-':{
			cout<<" subtraction ="<<a-b;
			break;
		}
		case'*':{
			cout<<" multiplication : "<<a*b;
			break;
		}
		case '/':{
			cout<<" division : "<<a/b;
			break;
		}
		default:{
			cout<<" invalid operation entered !";
			break;
		}
	}
	return 0;
}
