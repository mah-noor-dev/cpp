#include<iostream>
using namespace std;
int main(){
	int i,j,k;
	for(i=1;i<=4;i++){
		for(j=1;j<=4-i;j++){
			cout<<" ";
		}
		for(k=1;k<=2*i-1;k++){
			cout<<"*";
		}
		for(j=1;j<=7-2*i;j++){
			cout<<" ";
		}
		for(k=1;k<=2*i-1;k++){
			cout<<"*";
		}
		
		cout<<endl;
	}
	return 0;
}




/*6-2
4
6-2*i
6-4
2
6-3*i





   *      *    
  ***    ***
 *****  *****
**************
*/
