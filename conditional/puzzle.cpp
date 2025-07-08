#include <iostream>
using namespace std;
int main (){
	int a ;
	int b=100;
	int c=30;

	cout <<" enter a number between 1 and 100"<<endl;
	cin >> a;
	if (a-c>50 || a-c==50){
		cout<<" very big number . OHH HOO"<<endl;
		
	}
	else if ((a-c>30 && a-c<50) || a-c ==30 ){
		cout << " large number . nope "<<endl;
		
	}
	else if ( a-c >20 && a-c <30){
		cout << "large  "<<endl;
	}
	else if (a-c>10 && a-c<20 ){
		cout<<"very close ";
		
	}
		else if (a-c>5 && a-c<10 ){
		cout<<"very very close ";
		
	}
	else if(a==c){
		cout << " right shabash";
	}
	else{
		cout << " ni yr";
	}
		cout <<" enter a number again"<<endl;
	cin >> a;

		if (a-c>50 || a-c==50){
		cout<<" very big number . OHH HOO"<<endl;
		
	}
	else if (a-c>30 && a-c<50 || a-c ==30 ){
		cout << " large number . nope "<<endl;
		
	}
	else if ( a-c >20 && a-c <30){
		cout << "large  "<<endl;
	}
	else if (a-c>10 && a-c<20 ){
		cout<<"very close ";
		
	}
		else if (a-c>5 && a-c<10 ){
		cout<<"very very close ";
		
	}
	else if(a==c){
		cout << " right shabash";
	}
	else{
		cout << " ni yr";
	}
		cout <<" enter a number again "<<endl;
	cin >> a;

	if (a-c>50 || a-c==50){
		cout<<" very big number . OHH HOO"<<endl;
		
	}
	else if ((a-c>30 && a-c<50 )|| a-c ==30 ){
		cout << " large number . nope "<<endl;
		
	}
	else if ( (a-c >20 || a-c ==20) && a-c <30){
		cout << "large  "<<endl;
	}
	else if ((a-c>10 || a-c ==10 )&& a-c<20 ){
		cout<<"very close ";
		
	}
		else if ((a-c>5 || a-c ==5 )&& a-c<10 ){
		cout<<"very very close ";
		
	}
	else if(a==c){
		cout << " right shabash";
	}
	else{
		cout << " ni yr";
	}
	return 0;
}






	
	
	
	

