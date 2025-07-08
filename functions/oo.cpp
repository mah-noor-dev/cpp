#include<iostream>
using namespace std;
struct sterling{
	int pence;
	int shellings;
	int pounds;
};
void input(){
	sterling inputs1;
	cout<<"enter pounds .";
	cin>>inputs1.pounds;
		cout<<"enter shellings .";
	cin>>inputs1.shellings;
	cout<<"enter pences : ";
	cin>>inputs1.pence;
	sterling inputs2;
	cout<<endl<<"second amount : "<<endl;
	cout<<"enter pounds .";
	cin>>inputs2.pounds;
		cout<<"enter shellings .";
	cin>>inputs2.shellings;
	cout<<"enter pences : ";
	cin>>inputs2.pence;
	
	
}
void sum(sterling s1,sterling s2,sterling s3){
	
	s3.pounds=s1.pounds+s2.pounds;
	s3.shellings=s1.shellings+s2.shellings;
	s3.pence=s1.pence+s2.pence;

}

int main(){
	sterling amount1;
	sterling amount2;
	sterling amount3;
	input();
	sum(amount1,amount2,amount3);
	
	if(amount3.pence>11){
		amount3.shellings+=amount3.pence/12;
		amount3.pence=amount3.pence%12;
	}
	if(amount3.shellings>19){
		amount3.pounds+=amount3.shellings/20;
		amount3.shellings=amount3.shellings%20;
	}
	cout<<"pound : "<<amount3.pounds;
	cout<<" shelling : "<<amount3.shellings;
	cout<<"pences : "<<amount3.pence;
}
