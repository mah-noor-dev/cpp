#include<iostream>
using namespace std;

int main() {
    int a[5];
    for(int i=0;i<=4;i++){
    	cout<<"enter number :";
    	cin>>a[i];
	}
    for(int i = 0; i < 5-1; i++) {
        int min = i;
        for(int j = i+1; j < 5; j++) {
            if(a[j] < a[min])
                min= j;
        }
        swap(a[i], a[min]);
    }
    for(int i = 0; i < 5; i++)
        cout << a[i] << " ";
    cout << endl;
    return 0;
}
