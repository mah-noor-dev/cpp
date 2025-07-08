#include<iostream>
using namespace std;
int main(){
	int arr[6];
	int i,j;
	int 
	for(i=0;i<=5;i++){
		cout<<"enter numbers :";
		cin>>arr[i];
	}
	for(i=0;i<=5;i++){
		for(j=0;j<=4;j++){
			if(arr[j]>arr[j+1]){
				int c;
				c=arr[j];
				arr[j]=arr[j+1];
				arr[j+1]=c;
			}
		}
	}
		for(i=0;i<=5;i++){
			cout<<"numbers after sorting are :";
			cout<<arr[i];
				cout<<endl;
		}
		
	
	
	return 0;
}
