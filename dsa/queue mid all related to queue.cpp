//
//
//
//#include<iostream>
//using namespace std;
//int main(){
//	int arr[5];
//	int size=5;
//	int f=-1,b=-1;
//	
//	// enqueue:  and is full
//	
//	for(int i=0;i<size;i++){
//		cout<<"enter element : ";
//		int v;
//		cin>>v;
//		
//		if(b==size-1){
//			cout<<"queue is full "<<endl;
//		}
//		else{
//			
//			if(f==-1){
//				f=0;
//			}
//			b++;
//			arr[b]=v;
//			
//		}
//	}
//	//display:
//	for(int i=f;i<=b;i++){
//		cout<<arr[i]<<"--";
//		
//	}
//	cout<<endl;
//	
//	
//	// dequeue and is empty: 
//	
//	if(f==-1 || f>b){
//		cout<<"queue is empty "<<endl;
//		
//	}
//	else{
//		cout<<"deleted :"<<arr[f]<<endl;
//		f++;
//	}
//	
//	// display: 
//	for(int i=f;i<=b;i++){
//		cout<<arr[i]<<"--";
//	}
//	cout<<endl;
//	
//	
//	// peek
//	
//	if(f==-1 || f>b){
//		cout<<"queue is empty nothing to show "<<endl;
//	}
//	else{
//		cout<<"peek : "<<arr[f]<<endl;
//	}
//}
//


// priority queue : 


#include<iostream>
using namespace std;
int main(){
	int arr[5];
	int pr[5];
	int size=5;
	int n=0;
	
		int index=-1;
	// enqueue: 
	
	for(int i=0;i<size;i++){
		int v;
		cout<<"enter element : ";
		cin>>v;
		int p;
		cout<<"enter its priority : ";
		cin>>p;
		
		arr[n]=v;
		pr[n]=p;
		n++;
		
		
	}
	
	for(int i=0;i<n;i++){
		cout<<arr[i]<<" priority : "<<pr[i]<<endl;
	}
	
	// dequeue : 
	if(n==0){
		cout<<"queue is empty "<<endl;
	}
	else{
		int min=pr[0];

	for(int i=0;i<n;i++){
		if(pr[i]<min){
			min=pr[i];
			index=i;
		}
	}
	}
	
	for(int i=index;i<n-1;i++){
		arr[i]=arr[i+1];
		pr[i]=pr[i+1];
		
	}
	n--;
	
	//display
	for(int i=0;i<n;i++){
			cout<<arr[i]<<" priority : "<<pr[i]<<endl;
	}
}



//circular queue
//#include<iostream>
//using namespace std;
//
//int main() {
//    int size = 5;
//    int arr[5];
//    int front = -1, rear = -1;
//
//    // Enqueue 5 elements
//    for (int i = 0; i < size; i++) {
//        int val;
//        cout << "Enter element: ";
//        cin >> val;
//
//        // Check if full
//        if ((rear + 1) % size == front) {
//            cout << "Queue is full!\n";
//        } else {
//            if (front == -1) front = 0; // first element
//            rear = (rear + 1) % size;
//            arr[rear] = val;
//        }
//    }
//
//    // Display queue
//    cout << "Queue: ";
//    int i = front;
//    while (true) {
//        cout << arr[i] << " ";
//        if (i == rear) break;
//        i = (i + 1) % size;
//    }
//    cout << endl;
//
//    // Dequeue 2 elements
//    for (int d = 0; d < 2; d++) {
//        if (front == -1) {
//            cout << "Queue is empty!\n";
//        } else {
//            cout << "Deleted: " << arr[front] << endl;
//            if (front == rear) {
//                front = rear = -1; // only one element was present
//            } else {
//                front = (front + 1) % size;
//            }
//        }
//    }
//
//    // Display again
//    if (front == -1) {
//        cout << "Queue is empty now.\n";
//    } else {
//        cout << "Queue after deletion: ";
//        int i = front;
//        while (true) {
//            cout << arr[i] << " ";
//            if (i == rear) break;
//            i = (i + 1) % size;
//        }
//        cout << endl;
//    }
//
//    // Peek
//    if (front != -1)
//        cout << "Peek: " << arr[front] << endl;
//}

