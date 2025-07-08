#include<iostream>
using namespace std;
int main()
{
	string month;
	cout<<"enter your month";
	cin>>month;
	if(month=="april"||month=="june"||month=="sep"||month=="nov")
	{cout<<"30 days";
	}
	if(month=="jan"||month=="mar"||month=="may"||month=="jul"||month=="aug"||month=="oct"||month=="dec")
	{cout<<"31 days";
	}
	else if(month=="feb")
	{cout<<"28 days";
	}
	else {cout<<"invalid data entered";
	}
	return 0;
	
}
