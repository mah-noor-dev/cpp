#include<iostream>
using namespace std;
int main(){
//1 3 6 10 12 15 19 21 28 ...100
int a=0;
int i=1;
while(i<=100){
	cout<<i<<" ";
	if(i==1){
		a=2;
	}
	else if(a==2){
		a=3;
	}
	else if(a==3){
		a=4;
	}
	i=i+a;
}

	return 0;
}





