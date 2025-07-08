#include<iostream>
using namespace std;
int main(){
	int a,b,c,d;
	cout<<"enter first number : ";
	cin>>a;
	cout<<" enter second number :";
	cin>>b;
	cout<<" enter third number : ";
	cin>>c;
	if (b==a+1 && c==b+1){
		cout<<"consecutive number ."<<endl;
	}
	else{
		cout<<"non consecutive .";
		
	}
	return 0;
	
}
