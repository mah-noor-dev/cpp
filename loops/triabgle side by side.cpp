#include<iostream>
using namespace std;
int main(){
	int i,j,k;
	int e=8;
	for(i=1;i<=3;i++){
		for(j=1;j<=3-i;j++){
			cout<<" ";
		}
		for(k=1;k<=2*i-1;k++){
			cout<<"*";
	}


		for(j=1;j<=e;j++){
			cout<<" ";
		}
		for(k=1;k<=2*i-1;k++){
			cout<<"*";
	}
	
	
	e-=2;
	cout<<endl;
	}
	return 0;
}


