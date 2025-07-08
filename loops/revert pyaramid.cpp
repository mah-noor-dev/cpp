#include<iostream>
using namespace std;
int main(){
	int n;
	cin>>n;
	int i=1;
	while(i<=n){
		int c=0;
		int j=1;
		while(j<=i){
			if(i%j==0){
				c++;
			}
			j++;
		}
		if(c==2){
			cout<<i<<"    ";
		}
	}
}
