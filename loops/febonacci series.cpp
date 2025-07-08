#include<iostream>
using namespace std;
int main(){
int a=0;
int b=1;
int n;
cout<<" enter number : ";
cin>>n;

cout<<"series: "<<a<<endl<<b<<endl;
for(int i=3\\\\;i<=n;i++){
	int next=a+b;
	a=b;
	b=next;
	cout<<next<<endl;
}
}
