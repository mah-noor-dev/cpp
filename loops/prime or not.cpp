#include <iostream>
using namespace std;
int main()
{
	int i,c,n;
	cout<<"enter value of n";
	cin>>n;
	for(i=1;i<=n;i++)
	{if(n%i==0)
	{c++;}}
	 if(c==2)
	{cout<<"prime number";}
	else {cout<<"NOT PRIME";}
	return 0;
	
}
