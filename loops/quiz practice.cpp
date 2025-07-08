#include<iostream>
using namespace std;
int main (){
int i,j,k,d=1;
for(i=1;i<=5;i++){
	for(j=1;j<=3-d;j++){
		cout<<" ";}
		for(k=1;k<=2*d-1;k++){
			cout<<"*";
		}
		if (i<3){
			d++;
		}
		else{
			d--;
		}
		cout<<endl;
	
}
	return 0;
}
