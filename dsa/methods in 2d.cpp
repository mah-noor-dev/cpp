#include<iostream>
using namespace std;
int main (){

int arr[3][3];
	for(int i=0;i<=2;i++){
		for(int j=0;j<=2;j++){
		cout<<" enter your number :"<<endl;
			cin>>arr[i][j];
		
		}
	}
	cout<<"2 d array is :"<<endl;
	for(int a=0;a<=2;a++){
		for(int b=0;b<=2;b++){
			cout<<arr[a][b]<<" ";
		}
		cout<<endl;
	}
	
	
	
	cout<<" lets do thisss tooba      flatten 2d arr y :"<<endl;
	int flat[9];
	int index=0;
	for(int a=0;a<=3;a++){
		for(int b=0;b<=2;b++){
			flat[index]=arr[a][b];
			index++;
		}
	}
	
	cout<<endl<<endl<<" flattend arry is :"<<endl;
	for(int p=0;p<=8;p++){
		cout<<flat[p]<<" "<<endl;
	}
	
	
	for(int q=0;q<=8;q++){
		for(int l=0;l<=7;l++){
			if(flat [l]>flat[l+1]){
			int m;
			m=flat[l];
			flat[l]=flat[l+1];
			flat[l+1]=m;
					}
	}
		}
		
	cout<<endl<<" after buble sortinggg : "<<endl<<endl;
	for(int r=0;r<=8;r++){
		cout<<flat[r]<<endl;
		
	}


	cout<<endl<<endl<<endl;
	cout<<" converting 1 d back to 2 d : "<<endl<<endl;
	
	
	int indexb=0;
	for(int y=0;y<=2;y++){
		for(int z=0;z<=2;z++){
			arr[y][z]=flat[indexb];
			indexb++;
		}
	}
	
	cout<<endl<<endl<<" 2 d array is : ";
	for(int r=0;r<=2;r++){
		for(int u=0;u<=2;u++){
			cout<<arr[r][u]<<"    ";
		}
		cout<<endl;
	}



	
	return 0;
}
