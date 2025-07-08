/*#include<iostream>
using namespace std;
void sum(int a,int);
int main(){

int a,b;
cout<<"enter the value of a and b :";
cin>>a;
cin>>b;
 sum(a,b);
return 0;
}
void sum(){
	int suma;
	suma=a+b;
	cout<<"sum is :"<<suma;
}

#include<iostream>
using namespace std;
void intro();
int main(){
	intro();
	return 0;
}
void intro(){
	cout<<"my name is mahnoor";
	
}




#include<iostream>
using namespace std;
void fact(int a);
int main(){
	int a;
	cout<<"enter your number :";
	cin>>a;
	fact(a);
	return 0;
	
}
void fact(int a){
	int f=1;
	for(int i=1;i<=a;i++){
		f=f*i;
	}
	cout<<f;
}


#include<iostream>
using namespace std;
void prime(int a);
int main(){
	int a;
	cout<<"enter number :";
	cin>>a;
	prime(a);
	return 0;
}
void prime(int a){
	int c=0;
	for(int i=1;i<=a;i++){
		if(a%i==0){
			c++;
		}
	}
	if(c==2){
		cout<<"prime number .";
	}
	else{
		cout<<"not prime .";
	}
}

#include<iostream>
using namespace std;
void linear(int arr[4]);
int main(){
	int arr[4];
	for(int i=0;i<=3;i++){
		cout<<"enter number :";
		cin>>arr[i];
	}
	linear(arr);
	return 0;
}
void linear(int arr[4]){
	int id=-1;
	int n;
	cout<<"enter number to search :";
	cin>>n;
	for(int i=0;i<=3;i++){
		if(arr[i]==n){
			id=i;
		}
	}
	
	if(id==-1){
		cout<<"number not found .";
	}
	else{
		cout<<" number found at index "<<id;
	}
}
										ARRAYS

#include<iostream>
using namespace std;
int main(){
	int arr[4];
	int max;
	for(int i=0;i<=3;i++){
		cout<<"enter :";
		cin>>arr[i];
		
	}
	max=arr[0];
	for(int i=0;i<+3;i++){
		if(arr[i]<max){
			max=arr[i];
		}
	}
	cout<<"min is :"<<max;
}

#include<iostream>
using namespace std;
int main(){
	int arr[4];
	int max;
	for(int i=0;i<=3;i++){
		cout<<"enter :";
		cin>>arr[i];
		
	}
	int id=-1;
	int n;
	cout<<"EMTER :";
	cin>>n;
		for(int i=0;i<=3;i++){
		if(arr[i]==n){
			id=i;
		}
	}
	if(id==-1){
		cout<<"not found";
	}
	else{
		cout<<"found";
	}
	return 0;
}

#include<iostream>
using namespace std;
int main(){
	int arr[4];
	int max;
	for(int i=0;i<=3;i++){
		cout<<"enter :";
		cin>>arr[i];
		
	}
	int s=0,mid,e=3,id=-1,n;
	cout<<"enter number to search :";
	cin>>n;
	while(s<=e){
		mid=(s+e)/2;
		if(n==arr[mid]){
			id=mid;
			break;
		}
		else if(n>arr[mid]){
			s=mid+1;
		}
		else{
			e=mid-1;
		}
	}
	if(id==-1){
		cout<<"not found";
	}
	else{
		cout<<"found :"<<id;
		
	}
	return 0;
}

#include<iostream>
using namespace std;
int main(){
	int arr[4];
	int max;
	for(int i=0;i<=3;i++){
		cout<<"enter :";
		cin>>arr[i];
		
	}
	cout<<"your array is :";
	for(int i=0;i<=3;i++){
		cout<<arr[i]<<endl;
	}
	for(int i=0;i<=3;i++){
		for(int j=0;j<=2;j++){
			if(arr[j]>arr[j+1]){
				int c;
				c=arr[j];
				arr[j]=arr[j+1];
				arr[j+1]=c;
			}
		}
	}
	cout<<"your array after sorting is :";
	for(int i=0;i<=3;i++){
		cout<<arr[i]<<endl;
	}
	return 0;
}

#include<iostream>
using namespace std;
int main(){
	int arr[4];
	int max;
	for(int i=0;i<=3;i++){
		cout<<"enter :";
		cin>>arr[i];
		
	}
	cout<<"your array is :";
	for(int i=0;i<=3;i++){
		cout<<arr[i]<<endl;
	}
	for(int i=0;i<=3;i++){
		for(int j=0;j<=2;j++){
			if(arr[j]>arr[j+1]){
				int c;
				c=arr[j];
				arr[j]=arr[j+1];
				arr[j+1]=c;
			}
		}
	}
	cout<<"after sortind :";
	for(int i=0;i<=3;i++){
		cout<<arr[i]<<endl;
	}
		int s=0,e=3,id=-1,n;
		cout<<"enter number to searxh :";
		cin>>n;
		while(s<=e){
			int mid=(s+e)/2;
			if(n==arr[mid]){
				id=mid;
				break;
				
			}
			else if(n>arr[mid]){
				s=mid+1;
			}
			else{
				e=mid-1;
			}
		}
		if(id==-1){
			cout<<"not";
		}
		else{
			cout<<"found .";
		}
		return 0;
	}

#include<iostream>
using namespace std;
int main(){
	int arr[4];
	int max;
	for(int i=0;i<=3;i++){
		cout<<"enter :";
		cin>>arr[i];
		
	}
cout<<"your array is :";
	for(int i=0;i<=3;i++){
		cout<<arr[i]<<endl;
	}
	
	for(int i=0;i<=3;i++){
		for(int j=i+1;j<=3;j++){
			if(arr[j]>arr[i]){
				int c;
				c=arr[j];
				arr[j]=arr[j+1];
				arr[j+1]=c;
			}
		}
	}
		for(int i=0;i<=3;i++){
		cout<<arr[i];
		
	}
}

#include<iostream>
using namespace std;
int main(){
	int arr[4];
	for(int i=0;i<=3;i++){
		cout<<"enter :";
		cin>>arr[i];
	}
	cout<<"ypur arrr s :"<<endl;
	for(int i=0;i<=3;i++){
		cout<<arr[i]<<endl;
		
	}
	for(int i=0;i<=3;i++){
		for(int j=i+1;j<=3;j++){
			if(arr[j]<arr[i]){
				int c;
				c=arr[j];
				arr[j]=arr[i];
				arr[i]=c;
			}
			
		}
	}
		cout<<"ypur arrr s :"<<endl;
	for(int i=0;i<=3;i++){
		cout<<arr[i]<<endl;
		
	}
	
}

#include<iostream>
using namespace std;
int main(){
	int arr[2][2];
	for(int i=0;i<=1;i++){
		for(int j=0;j<=1;j++){
			cout<<" enter : ";
			cin>>arr[i][j];
		}
	}
	cout<<"array :"<<endl;
		for(int i=0;i<=1;i++){
		for(int j=0;j<=1;j++){
			cout<<arr[i][j];
		
		}
		cout<<endl;
	}
	int max=arr[0][0];
for(int i=0;i<=1;i++){
		for(int j=0;j<=1;j++){
			if(arr[i][j]>max){
				max=arr[i][j];
			}
}
}
cout<<"max is :"<<max;
}

#include<iostream>
using namespace std;
int main(){
	int arr[2][2];
	for(int i=0;i<=1;i++){
		for(int j=0;j<=1;j++){
			cout<<" enter : ";
			cin>>arr[i][j];
		}
	}
	cout<<"array :"<<endl;
		for(int i=0;i<=1;i++){
		for(int j=0;j<=1;j++){
			cout<<arr[i][j]<<" ";
		
		}
		cout<<endl;
	}
	int ida=-1,idb=-1;
	int n;
	cout<<"enter number :";
	cin>>n;
		for(int i=0;i<=1;i++){
		for(int j=0;j<=1;j++){
			if(arr[i][j]==n){
				ida=i;
				idb=j;
			}
		}
	}
	if(ida==-1 || idb==-1){
		cout<<"not";
	}
	else{
		cout<<"found "<<ida<<" "<<idb;
	}
	
	}
	*/
	
	#include<iostream>
using namespace std;
int main(){
	int arr[2][2];
	for(int i=0;i<=1;i++){
		for(int j=0;j<=1;j++){
			cout<<" enter : ";
			cin>>arr[i][j];
		}
	}
	cout<<"array :"<<endl;
		for(int i=0;i<=1;i++){
		for(int j=0;j<=1;j++){
			cout<<arr[i][j]<<" ";
		
		}
		cout<<endl;
	}
	
	cout<<" flattenig 2 d array :";
	int flat[4];
	int a=0;
	for(int i=0;i<=1;i++){
		for(int j=0;j<=1;j++){
				flat[a]=arr[i][j];
		a++;
		}
	
	}
	cout<<"f;atten =ed arr is :";
	for(int i=0;i<=3;i++){
		cout<<flat[i]<<endl;
	
	}
	cout<<"sorting :";
	for(int i=0;i<=3;i++){
		for(int j=0;j<=2;j++){
			if(flat[j]>flat[j+1]){
			
			int c;
			c=flat[j];
			flat[j]=flat[j+1];
			flat[j+1]=c;
		}
		}
		
	}
	cout<<"sorted array is :";
	for(int i=0;i<=3;i++){
		cout<<flat[i]<<endl;
	}
	int n;
	cout<<"enter number to search :";
	cin>>n;
	int s=0,e=3,mid,id=-1;
	while(s<=e){
		mid=(s+e)/2;
		if(n==flat[mid]){
			id=mid;
			break;
		}
		else if(n>flat[mid]){
			s=mid+1;
		}
		else{
			e=mid-1;
		}
	}
	if(id==-1){
		cout<<" not found";
	}
	else{
		cout<<"found .";
	}
	cout<<"convertind 1d to 2 d:";
	int b=0;
	for(int i=0;i<=1;i++){
		for(int j=0;j<=1;j++){
			arr[i][j]=flat[b];
			b++;
		}
	}
	cout<<"2d array is "<<endl;
		for(int i=0;i<=1;i++){
		for(int j=0;j<=1;j++){
			cout<<arr[i][j]<<" ";
		
		}
		cout<<endl;
	}
	}
	
	
	
