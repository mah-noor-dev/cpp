#include<iostream>
using namespace std;
int main()
{
	int n,num,b,rev=0;
	cout<<"enter number to check if it is palindrome or not";
	cin>>n;
	num=n;
	while(n!=0)
	{
		b=n%10;// to find last digit of number
		rev=(rev*10)+b; //to chnange place of didgit from ones to tens and tens to hundreds and so on...
		n=n/10;// to find remaining number after last didgit is found in b
	}
	if(num==rev)
	cout<<"number is palindrome";
	else 
	cout<<"not palindrome";
	return 0;
}
