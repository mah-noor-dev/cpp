#include<iostream>
using namespace std;
void findmax(int arr[]);
int main (){
	int arr[5];
	for(int j=0;j<=4;j++){
		cout<<"enter number :";
		cin>>arr[j];
	}
	findmax(arr);
	return 0;
}
void findmax(int arr[])
{
int max;
max=arr[0];
for(int i=0;i<=4;i++){
	if(arr[i]>max){
		max=arr[i];
	}
}	
cout<<" maximum is :"<<max;
}
