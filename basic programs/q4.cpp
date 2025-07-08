#include<iostream>
using namespace std;
int main(){
char ch;
cout<<" enter a character :"<<endl;
cin>>ch;
if(ch=='A'||ch=='E'||ch=='I'||ch=='O'||ch=='U'){
	cout<<"vowels but  uppercase ";
}
else if (ch=='a'||ch=='e'||ch=='i'||ch=='o'||ch=='u'){
	cout<<" vowels but lowercase";
}
else{
	cout<<"consonent";
}
	return 0;	
}

