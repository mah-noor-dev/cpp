//#include<iostream>
//using namespace std;
//float circarea(float radius){
//	float pivalue=3.1415;
//	float area=pivalue *(radius*radius);
//	return area;
//}
//int main(){
//	float inrad;
//	cout<<"Enter the radius of circle : ";
//	cin>>inrad;
//	float area_ans=circarea(inrad);
//	cout<<"the area of circle is : "<<area_ans;
//	return 0;
//}


//					question 2 :



//#include<iostream>
//using namespace std;
//double power(double n,int p){
//	double answer=1;
//	for(int i=1;i<=p;i++){
//		answer*=n;
//	}
//	return answer;
//
//}
//int main(){
//	double a;
//	int b;
//	cout<<"enter the value of number n : ";
//	cin>>a;
//	cout<<"enter the value of power p optional, enter 00 for default case  : ";
//	cin>>b;
//	if (b==0){
//		b=2;
//	}
//	double resultf=power(a,b);
//	cout<<"n raised to power p is : "<<resultf;
//	return 0;
//}



//				question 3 :



//#include<iostream>
//using namespace std;
//int zeroSmaller(int a,int b){
//	if(a<b){
//		a=0;
//	}
//	
//	else if(b<a){
//		b=0;
//	}
//	else{
//		cout<<"both numbers are same "<<endl;
//	}
//	
//	cout<<"a value is : "<<a<<endl;
//	cout<<"b value is : "<<b;
//return 0;	
//}
//int main(){
//	int x,y;
//	cout<<"you have to enter two numbers : one large and one small "<<endl;
//	cout<<"smaller will get zero !"<<endl;
//	cout<<"enter the value of first number : ";
//	cin>>x;
//	cout<<"enter the value of second number : ";
//	cin>>y;
//	zeroSmaller(x,y);
//	return 0;
//}


//		question 4:


//#include<iostream>
//using namespace std;
//float distancevalues(float a,float b){
//	if(a>b ){
//		cout<<a<<" is larger !";
//	}
//	else if(b>a ){
//		cout<<b<<" is larger !";
//	}
//	else{
//		cout<<"both are of same values !";
//	}
//	return 0;
//	
//}
//int main(){
//	float x,y;
//	cout<<"enter first distance value : ";
//	cin>>x;
//	cout<<"enter second distance value : ";
//	cin>>y;
//	 distancevalues(x,y);
//	return 0;
//	
//}

//		wusetion 5 :

//#include<iostream>
//using namespace std;
//int  hms_to_secs(int hours,int mins,int secs){
//	 if (hours < 0 || mins < 0 || secs < 0 || mins > 60 || secs > 60) {
//        cout << "Invalid time input" << endl;
//        return 0; 
//    }
//    else{
//    	long int totalseconds=(hours*3600)+(mins*60)+(secs);
//	return totalseconds;
//	}
//
//}
//int main(){
//	int hours,mins,secs;
//	cout<<"enter the hours : ";
//	cin>>hours;
//	cout<<"enter the minutes : ";
//	cin>>mins;
//	cout<<"enter the seconds :  ";
//	cin>>secs;
//	cout<<"your entered time is : "<<endl;
//	cout<<hours<<" : "<<mins<<" : "<<secs<<" ."<<endl;
//	long int seconds=hms_to_secs(hours,mins,secs);
//	cout<<"total number of seconds are : "<<seconds<<" s ";
//	
//}
/*
#include<iostream>
using namespace std;
struct human{
	public:
	int age;
	string name;
	string gender;
	float hieght;
	
	void eat(){
		cout<<this->name<<" is eating"<<endl;
		
	}
	
	void object(human &h2,string Name){
		h2.name=Name;
		
	}
	
	string  eat(string food){
	cout<<this->name<<" is eating"<<food<<endl;
	return food;
	}
	
}; 

int main(){
	
	human h1;
		human h2;
	
	h1.age=19;
	h1.name="Mahnoor";

	
		h2.age=79;
	h2.name="Saleem";
	
cout<<h2.name;
	string name="Faizan";
	h1.object(h2,name);
	
cout<<endl<<	h2.name;

	return 0;
}
*/



////			question 6 :
//
//#include<iostream>
//using namespace std;
//struct time{
//	int hours;
//	int mins;
//	int secs;
//	
//	long time_to_secs(time t1){
//		return (t1.hours*3600)+(t1.mins*60)+(t1.secs);
//	}
//	long secs_to_time(long t1){
//		int hours=t1/3600;
//		t1%=3600;
//		int minutes=t1/60;
//		t1%=60;
//		int seconds=t1%60;
//		cout<<"your time format again is : "<<endl;
//		cout<<"  hours  : "<<" minutes  : "<<"  seconds ."<<endl;
//		cout<<"  "<<hours<<"  :"<<minutes<<"  :"<<seconds;
//	}
//	
//};
//int main(){
//	time timevalues;
//	cout<<"enter the value of hours : ";
//	cin>>timevalues.hours;
//	cout<<"enter the value of minutes : ";
//	cin>>timevalues.mins;
//	cout<<"enter the value of seconds : ";
//	cin>>timevalues.secs;
//	
//	cout<<"total seconds are : ";
//	long totalsec=timevalues.time_to_secs(timevalues);
//	cout<<totalsec<<endl;
//	long convertbacktime=timevalues.secs_to_time(totalsec);
//}
//
//


//			question 7 
//
//#include<iostream>
//using namespace std;
//double power(double n,int p){
//	cout<<endl<<endl<<"double case of power function :"<<endl;
//	int answer=1;
//	for(int i=1;i<=p;i++){
//		answer*=n;
//	}
//	cout<<"n raised to power p is : "<<answer;
//}
//int power(int a,int b){
//	cout<<endl<<endl<<"int case of power function : "<<endl;
//	int ans=1;
//	for(int i=1;i<=b;i++){
//		ans*=a;
//	}
//	cout<<"a raised to power b is : "<<ans<<endl;
//}
//float power(float a,float b){
//	cout<<endl<<endl<<"float case of power function : "<<endl;
//	int ans=1;
//	for(int i=1;i<=b;i++){
//		ans*=a;
//	}
//	cout<<"base raised to power  is : "<<ans;
//}
//int power(char c,int d){
//	cout<<" character case of power function : "<<endl;
//	int base=c;
//	int ans=1;
//	for(int i=1;i<=d;i++){
//		ans*=base;
//	}
//	cout<<endl<<"char raised to power is : "<<ans;
//}
//
//int main(){
//	double a;
//	int b;
//	cout<<"double case ::"<<endl<<endl;
//	cout<<"enter base n : ";
//	cin>>a;
//	cout<<"enter exponent : ";
//	cin>>b;
//	power(a,b);
//	cout<<endl<<"int case :: "<<endl<<endl;
//	int abase,aexpo;
//	cout<<endl<<"base value : ";
//	cin>>abase;
//	cout<<"exponent value : "<<endl;
//	cin>>aexpo;
//	power(abase,aexpo);
//	cout<<"float case :: "<<endl<<endl;
//	float base;
//	float expo;
//	cout<<endl<<"base value : ";
//	cin>>base;
//	cout<<"exponent value : "<<endl;
//	cin>>expo;
//	power(base,expo);
//	cout<<endl<<endl<<"character case :";
//	char cbase;
//	int cexpo;
//	cout<<"enter a character :";
//	cin>>cbase;
//	cout<<"enter power:";
//	cin>>cexpo;
//	power(cbase,cexpo);
//	
//}

//

//			question  8 :
//#include<iostream>
//using namespace std;
//
//void swap(int &num1,int &num2){
//	int temp=num1;
//	num1=num2;
//	num2=temp;
//}
//int main(){
//	int num1=1;
//	int num2=2;
//	
//	cout<<"Before : "<<endl<<"Num1 : "<<num1<<endl<<"Num2 : "<<num2;
//	
//	 swap(num1,num2);
//	
//	cout<<"After : "<<endl<<"Num1 : "<<num1<<endl<<"Num2 : "<<num2;
//	return 0;
//}



//			question 9:
//#include<iostream>
//using namespace std;
//struct time{
//	int hours;
//	int minutes;
//	int secs;
//
//	
//};
//void swap(time &time1,time &time2){
//		time temp;
//		temp=time1;
//		time1=time2;
//		time2=temp;
//
//	}
//int main(){
//	time time1;
//	cout << "Enter hours for time1: ";
//    cin >> time1.hours;
//    cout << "Enter minutes for time1: ";
//    cin >> time1.minutes;
//    cout << "Enter seconds for time1: ";
//    cin >> time1.secs;
//	time time2;
//	cout << "Enter hours for time2: ";
//    cin >> time2.hours;
//    cout << "Enter minutes for time2: ";
//    cin >> time2.minutes;
//    cout << "Enter seconds for time2: ";
//    cin >> time2.secs;
//	cout<<endl<<endl<<"before swap values :"<<endl<<endl;
//	
//	cout << endl<<"Time1: " << time1.hours << ":" << time1.minutes << ":" << time1.secs << endl;
//	cout << endl<< "Time2: " << time2.hours << ":" << time2.minutes << ":" << time2.secs << endl;
//	swap(time1,time2);
//	cout<<endl<<endl<<"after swap values :"<<endl<<endl;
//	
//	cout << endl<<"Time1: " << time1.hours << ":" << time1.minutes << ":" << time1.secs << endl;
//	cout << endl<< "Time2: " << time2.hours << ":" << time2.minutes << ":" << time2.secs << endl;
//}
//
//
//

//question 10

//#include<iostream>
//using namespace std;
//int a=0;
//void callingfunction(){
//	cout<<"i have been called "<<a<<" times"<<endl;
//}
//int main(){
//	cout<<"calling my function : ";
//	for(int i=0;i<=10;i++){
//		callingfunction();
//		a++;
//	}
//}
#include<iostream>
using namespace std;
void functioncall(int a){
	cout<<"i have been called "<<a<<" times "<<endl;
	
}
int main(){
	int a;
	for(int a=0;a<=10;a++){
		functioncall(a);
	}
}



