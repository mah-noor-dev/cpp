/*Print pattern:
* * *
* * *
* * *
* * *   */
#include<iostream>
using namespace std;
int main(){
	int i,j;
	for(i=1;i<=3;i++){
		for(j=1;j<=3;j++){
			cout<<"*";
		}
		cout<<endl;
	}
	return 0;
}
