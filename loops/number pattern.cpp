#include<iostream>
using namespace std;
int main(){
 /* 1
   12 1
  123 21
 1234 321
12345 4321
 1234 321
  123 21
   12 1
    1
    */
int i,j,k;
int d=1;
for(i=1;i<=9;i++){
	for(j=1;j<=5-d;j++){
		cout<<" ";
	}
	for()
	for(k=1;k<=2*d-1;k++){
		if(k<=d){
				cout<<k;
		}
		else{
			cout<<2*d-k;
		}
	
	}
if(i<5){
	d++;
}
else{
	d--;
}
	cout<<endl;
	
}
return 0;
}
