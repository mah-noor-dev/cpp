#include<iostream>
using namespace std;
struct book{
	string Title;
	string author;
	float price;
};
int main(){
	book book1;
	
	cout<<"enter the title of book   ";
	getline(cin,book1.Title);
	cout<<"enter the author name :    ";
	getline(cin,book1.author);
	cout<<"the price :   ";
	cin>>book1.price;
	cout<<"your book details : "<<endl;
	cout<<book1.Title<<endl;
	cout<<book1.author<<endl;
	cout<<book1.price<<endl; 
}
