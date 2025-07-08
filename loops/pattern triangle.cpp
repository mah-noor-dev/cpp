#include<iostream>
using namespace std;
int main()
{int i,j,k;
for(i=1;i<=3;i++)
{
	for(j=1;j<=3-i;j++){
	
	cout<<" ";
}
	for(k=1;k<=i;k++){
		cout<<"*";
	}
	cout<<"\n";
	
}
return 0;
}

