#include<iostream>
using namespace std;
int main (){
	/*int a,b,c,d,max;
	cout<<" enter values of a,b,c : ";
	cin>>a>>b>>c>>d;
	 max=a;
	if (b>max)
	max=b;
	if (c>max)
	max=c;
	if (d>max)
	max=d;
	cout<<" max number is : "<<max;
	return 0;
	int a;
	cin>>a;
	if (a>=50){
		cout<<" pass .";
	}
	else{
		cout<<" fail.";
	}
	char a;
	cout<<" enter ch :";
	cin>>a;
	if (a=='a'|| a=='e'||a=='i'||a=='o'||a=='u'|| a=='A'||a=='E'||a=='I'||a=='O'||a=='U'){
		cout<<" vowel .";
	}
	else {
		cout<<" consonent";
	}
	int a,b,c,d,e;
	cout<<" enter a b c d,e: ";
		cin>>a>>b>>c>>d>>e;
		if (a>b){
			if (a>c){
				if(a>d){
					if (a>e){
						cout<<" a is greatest .";
					}
					else {
						cout<<" e is greatest ";
					}}
					else {
						if (d>e){
							cout<<" d is greatest .";
						}
						else {
							cout<<" e is greatest .";
						}}
					}
					else {
						if (c>d ){
							if ( c>e ){
								cout<<" c is greatest .";
							}
							else {
								cout<<"e is greatest .";
							}
						}
						else{
							if (d>e){
								cout<<" d is greatest .";
							}
							else {
								cout<<" e is greatest .";
							}
							
						}
						
					}
				}
				else {
					if(b>c){
						if (b>d ){
							if (b>e){
								cout<<" b is largest .";
							}
							else {
								cout<<" e is largest .";
							}
						}
						else {
							if (d>e ){
								cout<<" d is largest .";
							}
							else {
								cout<<" e is largest .";
							}
						}
					}
					else {
						if (c>d ){
							if (c>e){
								cout<<" c is greatest ";
							}
							else {
								cout<<" e is greatest .";
							}
						}
						else {
							if (d>e ){
								cout<<" d is greatest .";
							}
							else {
								cout<<" e is greatest .";
							}
						}
					}
				}
				if |( a % 4== 0 && a % 100 !==0)|| ( a% 400==0)*/
				
				int a,c;
				c=1;
				cout << " enter number : ";
				cin>>a;
				if ( a<0){
					cout<<" bhaag ja ";
				}
				else {
					for (int i=1;i<=a;++i){
						 c=c*i;
					}
					cout<<" factorial is : "<<c;
					
				}
				return 0;}
					
	
	

