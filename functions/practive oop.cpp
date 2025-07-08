//////////#include<iostream>
//////////using namespace std;
//////////int power(int n,int p){
//////////	int ans=1;
//////////	for(int i=1;i<=p;i++){
//////////		ans*=n;
//////////		
//////////	}
//////////	return ans;
//////////}
//////////int main(){
//////////	int a,b;
//////////	cout<<"enter base : ";
//////////	cin>>a;
//////////	cout<<"enter expo : ";
//////////	cin>>b;
//////////	int result=power(a,b);
//////////	cout<<a<<" power "<<b<<" : "<<result;
//////////	return 0;
//////////}
////////
////////#include<iostream>
////////using namespace std;
////////int check(int x,int y){
////////	if(x<y){
////////		x=0;
////////		
////////	}
////////	else if(y<x){
////////		y=0;
////////	}
////////	else{
////////		cout<<"both are zero ! ";
////////	}
////////	cout<<"a value : "<<x;
////////	cout<<"b value : "<<y;
////////}
////////int main(){
////////	int a,b;
////////	cout<<"enter number a : ";
////////	cin>>a;
////////	cout<<"enter b : ";
////////	cin>>b;
////////	check(a,b);
////////	
////////}
//////#include<iostream>
//////using namespace std;
//////
//////struct time{
//////	int hours;
//////	int mins;
//////	int sec;
//////	
//////	
//////	long hmstosecs(time timevalues){
//////	return (timevalues.hours*3600) + (timevalues.mins*60)+(timevalues.sec);
//////	}
//////	long secstohms(long secs){
//////		int hours=secs/3600;
//////		secs=secs%3600;
//////		int minutes=secs/60;
//////		secs=secs%60;
//////		cout<<"hours : "<<hours;
//////		cout<<"mins : "<<minutes;
//////		cout<<"secs : "<<secs;
//////	}
//////};
//////int main(){
//////	time timevalues;
//////	cout<<"enter hours : ";
//////	cin>>timevalues.hours;
//////	cout<<"enter mins : ";
//////	cin>>timevalues.mins;
//////	cout<<"enter secs : ";
//////	cin>>timevalues.sec;
//////	long ressecs=timevalues.hmstosecs(timevalues);
//////	cout<<"total secs are : "<<ressecs;
//////	timevalues.secstohms(ressecs);
//////	
//////}
////#include<iostream>
////using namespace std;
////void swap(int &num1,int &num2){
////	int temp;
////	temp=num1;
////	num1=num2;
////	num2=temp;
////	
////}
////int main(){
////	int num1,num2;
////	cout<<"enter num1 : ";
////	cin>>num1;
////	cout<<"enter num2 : ";
////	cin>>num2;
////	cout<<endl<<"before swap : "<<endl;
////	cout<<num1 <<"  : "<<num2;
////	swap(num1,num2);
////	cout<<endl<<"after swap : "<<endl;
////	cout<<num1 <<"  : "<<num2;
////	
////}
//#include<iostream>
//using namespace std;
//struct time{
//	int hours;
//	int mins;
//	int secs;
//	
//};
//void swap(time &time1,time &time2){
//	time temp;
//	temp=time1;
//	time1=time2;
//	time2=temp;
//}
//int main(){
//	time time1;
//
//	cout<<"time 1 : "<<endl;
//	cout<<"enter hours : ";
//	cin>>time1.hours;
//	cout<<"enter mins : ";
//	cin>>time1.mins;
//	cout<<"enter secs : ";
//	cin>>time1.secs;
//	time time2;
//	cout<<"time 2 : "<<endl;
//	cout<<"enter hours : ";
//	cin>>time2.hours;
//	cout<<"enter mins : ";
//	cin>>time2.mins;
//	cout<<"enter secs : ";
//	cin>>time2.secs;
//	cout<<endl<<"before swap : ";
//	cout<<"time 1 : "<<endl;
//	cout<<time1.hours<<"  : "<<time1.mins<<"  : "<<time1.secs<<endl;
//	cout<<endl<<"before swap : ";
//	cout<<"time 2 : "<<endl;
//	cout<<time2.hours<<"  : "<<time2.mins<<"  : "<<time2.secs<<endl;
//	swap(time1,time2);
//	cout<<endl<<"after swap : ";
//	cout<<"time 1 : "<<endl;
//	cout<<time1.hours<<"  : "<<time1.mins<<"  : "<<time1.secs<<endl;
//	cout<<endl<<"after swap : ";
//	cout<<"time 2 : "<<endl;
//	cout<<time2.hours<<"  : "<<time2.mins<<"  : "<<time2.secs<<endl;
//	
//	
//}
#include<iostream>
using namespace std;
struct time{
	int numinator;
	int denominator;
	
};
void fadd(time value,time value2){
	int lower=value.denominator*value2.denominator;
	int upp=((lower/value.denominator)*value.numinator) + ((lower/value2.denominator)*value2.numinator);
	cout<<"addition of fraction : ";
	cout<<upp<<" / "<<lower;
}
void fsub(time value,time value2){
	int lower=value.denominator*value2.denominator;
	int upp=((lower/value.denominator)*value.numinator) - ((lower/value2.denominator)*value2.numinator);
	cout<<endl<<"sub of fraction : ";
	cout<<upp<<" / "<<lower;
}
void fmul(time value,time value2){
	int lower=value.denominator*value2.denominator;
	int upp=value.numinator*value2.numinator;
	cout<<endl<<"mul of fraction : ";
	cout<<upp<<" / "<<lower;
}
void fdivide(time value,time value2){
	int lower=value.denominator*value2.numinator;
	int upp=value.numinator*value2.denominator;
	cout<<endl<<"div of fraction : ";
	cout<<upp<<" / "<<lower;
}
int main(){
	time value;
	cout<<"enter num : ";
	cin>>value.numinator;
	cout<<"enter deno : ";
	cin>>value.denominator;
	time value2;
	cout<<endl<<"fraction 2 : ";
	cout<<"enter num : ";
	cin>>value2.numinator;
	cout<<"enter deno : ";
	cin>>value2.denominator;
	fadd(value,value2);
	fsub(value,value2);
	fmul(value,value2);
	fdivide(value,value2);
	
}
