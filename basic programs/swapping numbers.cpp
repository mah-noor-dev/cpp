#include <iostream>
using namespace std;
int main (){
	int a,b;
	cout <<" enter number : ";
	cin >> a;
	cout << " enter second number : ";
	cin >> b;
	int temp;
	temp=a;
	a=b;

b = temp;
	cout << " value of a after swapping :"<< a<< endl;
	cout << " va;ue of b after swapping : "<< b;
	return 0;
}

