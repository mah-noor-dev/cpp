#include<iostream>
using namespace std;
int main (){
	int arr[2][2];
	for(int i=0;i<=1;i++){
		for(int j=0;j<=1;j++){
			cout<<" enter your number : ";
			cin>>arr[i][j];
		}	}	
	cout<<endl<<" 2 d array is :"<<endl;
	for(int i=0;i<=1;i++){
		for(int j=0;j<=1;j++){
			cout<<arr[i][j]<<"  ";
		}
		cout<<endl;
	}
	cout<<endl<<" i am flattening this 2 d array into 1 d array for my own convenience .bcz sorting is easy in 1d :"<<endl<<endl;
	
	int flat[4];
	int index=0;
	for(int i=0;i<=1;i++){
		for(int j=0;j<=1;j++){
		flat[index]=arr[i][j];
		index++;
		}
		
	}
	
	cout<<endl<<endl<<" flattened array is : "<<endl;
	for(int p=0;p<=3;p++){
		cout<<flat[p]<<endl;
	}
	
	for(int y=0;y<=3;y++){
		for(int z=y+1;z<=3;z++){
			if(flat[z]<flat[y]){
				int c;
				c=flat[z];
				flat[z]=flat[y];
				flat[y]=c;
			}
		}
	}
	cout<<" selection sorting 1d array is : "<<endl;
	for(int i=0;i<=3;i++){
		cout<<flat[i]<<endl;
	}
	
	cout<<endl<<" converting this 1d back to 2 d : ";
int indexb=0;
	for(int i=0;i<=1;i++){
		for(int j=0;j<=1;j++){
			arr[i][j]=flat[indexb];
			indexb++;
		}
	}
	cout<<endl<<" 2 d array is :"<<endl;
	for(int i=0;i<=1;i++){
		for(int j=0;j<=1;j++){
			cout<<arr[i][j]<<"  ";
		}
		cout<<endl;
	}
	
	return 0;
}
