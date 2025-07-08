/*    * * * * *
   * * *
   * *
   *   
#include<iostream>
using namespace std;
int main (){
	int i,j;
	for (i=4;i<=1;i--){
		for(j=1;j<=4;j++){
			if (j>=i){
				cout<<"*";
			}
			else{
				cout<<" ";
			}
		}
		cout<<endl;
	}
	return 0;
}
 
 #include<iostream>
using namespace std;
int main()
{
	int i,j;
	for(i=1;i<=4;i++)
	{ for(j=1;j<=4;j++)
{if(i==2&&j==4)
cout<<"                                                ";
else if(i==3&&j==3)
cout<<"                                                ";
else if(i==3&&j==4)
cout<<"                                                ";
else if(i==4&&j==2)
cout<<"                                                ";
else if(i==4&&j==3)
cout<<"                                                ";
else if(i==4&&j==4)
cout<<"                                                ";
else {cout<<"*";}
}
cout<<endl;}
	return 0;
}






****
***
**
*

   */
#include<iostream>
using namespace std;
int main (){
	int i,j;
	for(i=1;i<=4;i++){
		for(j=1;j<=4;j++){
			if((i==2 && j==4) || (i==3 && j==3) || (i==3 && j==4) || (i==4 && j==2)||(i==4 && j==3)|| (i==4 && j==4)){
				cout<<"  ";
			}
			else{
				cout<<"*";
			}
		}
		cout<<endl;
	}
	return 0;
}





















