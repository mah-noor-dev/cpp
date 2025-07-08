#include<iostream>
using namespace std;
int main (){
	int a,b,c,d,e;
	cout<<" enter the value of a.";
	cin>>a;
	cout<<" enter the value of b .";
	cin>>b;
	cout<<" enter the value of c : ";
	cin>>c;
	cout<<" enter the value of d : ";
	cin>>d;
	cout<<" enter the value of e : ";
	cin>>e;
	if (a>b){
		if (a>c){
			if (a>d){
				if(a>e){
					cout<<" a is the greatest .";
				
				
				}else {
				
				cout<<" e is the greatest .";
			}
		}
			else{
				if (d>e){
					cout<<" d is greatest .";
				}
				else {
					cout<<" e is the greatest .";
				}
			}
	}
		else{
			if(c>d){
				if (c>e){
					cout<<" c is the greatest .";
				}
				else {
					cout<<" e is the greatest ";
				}
				
			}
			else {
				if ( d>e){
					cout<<" d is the greatest ";
				}
				else {
					cout<<" e is the greatest ";
				}
			}
		}
		
	}
	else{
		if (b>c){
			if (b>d){
				if (b>e){
					cout<<" b is the greatest .";
				}
				else {
					cout<<" e is the greatest .";
				}
			}
			else {
				if (d>e){
					cout<<" d is the largest .";
				}
				else{
					cout<<" e is the largest .";
				}
			}
		}
		else {
			if (c>d){
				if(c>e){
					cout<<" c is the largest .";
				}
				else {
					cout<<" e is the largest .";
				}
			}
			else {
				if (d>e){
					cout<<" d is the largest .";
				}
				else {
					cout<<" e is the largest .";
				}
			}
		}
	}
	return 0;
}
	
	
	
	

