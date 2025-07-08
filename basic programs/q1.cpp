#include<iostream>
using namespace std;
int main(){
/*Program that input length and width of a field in feet, price to cut grass per sqare feet and calculate price to cut 
grass in whole field (Formula hint :- totalPrice = length * width * pricePerSqFt)*/
   	int length,width,ppsf;
   	float price;
   	cout<<" enter length in feets : "<<endl;
   	cin>>length;
   	cout<<" enter width in feets : "<<endl;
   	cin>>width;
   	cout<<" enter price to cut grass per square feet in ruppees :"<<endl;
   	cin>>ppsf;
   	price=length*width*ppsf;
   	cout<<" total price to cut whole field of grass is :"<<price<<" rupees."<<endl;
   	cout<<endl;
   	cout<<"  MAH NOOR :     FA23-BCS-332 ";
   	return 0;
   	
}
