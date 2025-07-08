#include<iostream>
using namespace std;
void array(int i,int j);
int main(){
	int i,j;
	cout<<"enter row :";
	cin>>i;
	cout<<"enter columns : ";
	cin>>j;
	array(i,j);
	return 0;
}
void array(int i,int j){
	int arr[i][j];
	for(int a=0;a<i;a++){
		for(int b=0;b<j;b++){
			cout<<"enter : ";
			cin>>arr[a][b];
			cout<<endl;
		}
	}
	cout<<"\n your array is : ";
	for(int a=0;a<i;a++){
		for(int b=0;b<j;b++){
			cout<<arr[a][b]<<"  ";
		}
		cout<<endl;
	}
	
	int min=arr[0][0];
	for(int c=0;c<i;c++){
		for(int d=0;d<j;d++){
			if(arr[c][d]<min){
				min=arr[c][d];
			}
		}
	}
	cout<<"\n minimum is :  "<<min;
	
}
