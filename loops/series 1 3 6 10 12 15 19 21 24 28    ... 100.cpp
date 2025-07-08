#include <iostream>
using namespace std;
int main(){
// 1 3 6 10 12 15 19 21 28 ...100
int a,i;
for(i=1;i<=100;i+=a){
	cout<<i<<" ";
	if(i==1){
		a=2;
	}
	else if(a==2){
		a=3;
	}
	else if (a==3){
		a=4;
	}
	else if (a==4){
		a=2;
	}
}
		return 0;
}
