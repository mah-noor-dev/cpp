#include<iostream>
using namespace std;
int main(){

int arr[4];
int i,a,b,j,c,x;
for(i=0;i<=3;i++){

		cout<<"enter number :";
		cin>>arr[i];
	}
	
	
	for(a=0;a<=3;a++){
		for(b=a+1;b<=3;b++){
			if(arr[b]<arr[a]){
				 
				c=arr[b];
				arr[b]=arr[a];
				arr[a]=c;
			}
		}
	}
	cout<<" after selection sort :";
	for(x=0;x<=3;x++){
		cout<<arr[x]<<endl;
	}
}
