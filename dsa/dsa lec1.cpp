#include<iostream>
using namespace std;
int main(){
//	int s;
//	cout<<"enter the size of array : ";
//	cin>>s;
//	int arr[s];
//	cout<<"enter the values in array : "<<endl;
//	for(int i=0;i<s;i++){
//		cout<<"enter "<<i<<"th value : ";
//		cin>>arr[i];
//	}
//	cout<<"your array is : ";
//	for(int i=0;i<s;i++){
//		cout<<arr[i]<<endl;
//	}

//int size;
//cout<<"enter size of array ";
//int arr[size];
//arr[size]={1,2,3,4};
//cout<<"your array was : ";
//for(int i=0;i<size;i++){
//	cout<<arr[i]<<endl;
//}
//cout<<"enter number to insert at start ";
//int value;
//cin>>value;
//for(int i=size;i>0;i--){
//	arr[]
//}
int arr[15]={};
int n=10;
cout<<"array was previously : ";
for(int i=0;i<10;i++){
	cout<<arr[i]<<endl;
	
}
cout<<"now lets insert values ";
for(int i=0;i<10;i++){
	cin>>arr[i];
}
cout<<"after inserting values in array : "<<endl;
for(int i=0;i<10;i++){
	cout<<"arr["<<i<<"]  : "<<arr[i]<<endl;
}

cout<<"enter value to insert : ";
int value;
cin>>value;
for(int i=n;i>0;i--){
	arr[i]=arr[i-1];
}
arr[0]=value;
n++;
cout<<"after inserting at start : "<<endl;
for(int i=0;i<n;i++){
	cout<<"arr["<<i<<"] : "<<arr[i]<<endl;
}
cout<<"enter fisrt the number of elements you want to enter in end ";
int num;
cin>>num;

cout<<"enter values : ";
for(int i=n;i<n+num;i++){
	cin>>arr[i];
	
}
n+=num;
cout<<"after inserting at end : "<<endl;
for(int i=0;i<n;i++){
	cout<<"arr["<<i<<"] : "<<arr[i]<<endl;
}
cout<<"enter value to insert in random";
int midvalue;
cin>>midvalue;
cout<<"enter place you wanna have it on ";
int location;
cin>>location;
if(location>=0 && location<=n){
	for(int i=n+1;i>location;i--){
	arr[i]=arr[i-1];
}
arr[location]=midvalue;
n++;
cout<<"after inserting at your desired location : "<<endl;
for(int i=0;i<n;i++){
		cout<<"arr["<<i<<"] : "<<arr[i]<<endl;
}
}
else{
	cout<<"invalid location entered";
}

}
