#include<iostream>
using namespace std;
int main(){
	int a=5;
   int i,j;
   for(i=1;i<=(a+1)/2;i++){
   	for(j=1;j<=i;j++){
   		cout<<i*j<<" ";
	   }
	   cout<<endl;
   }
   return 0;
}
