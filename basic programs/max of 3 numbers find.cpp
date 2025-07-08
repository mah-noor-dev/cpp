#include<iostream>
using namespace std;
int main (){
	int a,b,c,max;
	cout<<" enter values of a,b,c : ";
	cin>>a>>b>>c;
	 max=a;
	if (b>max)
	max=b;
	if (c>max)
	max=c;
	cout<<" max number is : "<<max;
	return 0;
}
