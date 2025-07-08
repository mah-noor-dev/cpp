#include<iostream>
using namespace std;
	int arr[5];
	int size=5;
	int b=-1;
	int f=-1;
void enque(int value){
		if((b+1)%size==f){
			cout<<"queue is full "<<endl;
		}
		else{
			if(f==-1){
				f=0;
			}
			b=(b+1)%size;
			arr[b]=value;
		}
	}
	void deque(){
		if(f==-1 || f>b){
			cout<<"queue is empty "<<endl;
		}
		else{
			cout<<"delted "<<arr[f];
			f=(f+1)%size;
		}
	}
	void display(){
		int i=f;
		while(true){
			cout<<arr[i]<<"--";
			if(i==b){
				break;
			}
			i=(i+1)%size;
		}
	}
int main(){

	
	
	
	enque(10);
	enque(20);
	enque(30);
	enque(40);
	enque(50);
	display();
	deque();
	deque();
	display();
	}
