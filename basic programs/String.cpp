#include<iostream>
#include<algorithm>
#include<string>
using namespace std;
int main(){
string a;
string b;
getline(cin,a);
getline(cin,b);
a=a.append(b);
cout<<a<<endl;
cout<<a.length()<<endl;
sort(a.begin(),a.end());
cout<<a<<endl;
a=a.substr(5,5);
cout<<a<<endl;
cout<<a.find("noor");
return 0;}


