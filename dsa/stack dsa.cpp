////#include<iostream>
////using namespace std;
////int Stack[100];
////int n=100;
////int top=-1;
////void push(int value){
////	if(top>=n-1){
////		cout<<"stack overflow .";
////	}
////	else{
////		top++;
////		Stack[top]=value;
////	}
////}
////void pop(){
////	if(top<=-1){
////		cout<<"stack underflow ";
////	}
////	else{
////		cout<<"stack first element  poped "<<Stack[top]<<endl;
////		top--;
////	}
////}
////void display(){
////	for(int i=0;i<=top;i++){
////		cout<<"stack element : "<<Stack[i]<<endl;
////	}
////}
////int main(){
////	push(9);
////	push(3);
////	push(2);
////	push(1);
////	push(10);
////	push(20);
////	pop();
////	pop();
////	display();
////}
//
//#include<iostream>
//using namespace std;
//int Stack[5];
//int n=5;
//int top=-1;
//
//bool isFull(){
//	return (top>=n-1);
//}
//bool isEmpty(){
//	return (top<=-1);
//}
//void push(int value){
//	if(isFull()){
//		cout<<"stack overflow ."<<endl;
//	}
//	else{
//		top++;
//		cout<<"value : "<<value<<" pushed to stack "<<endl;
//		Stack[top]=value;
//	}
//}
//void pop(){
//	if(isEmpty()){
//		cout<<"stack underflow ";
//	}
//	else{
//		cout<<"stack first element  poped "<<Stack[top]<<endl;
//		top--;
//	}
//}
//void display(){
//	for(int i=0;i<=top;i++){
//		cout<<"stack element : "<<Stack[i]<<endl;
//	}
//}
//int main(){
//	int a,b,c,d,e,f,g;
//	cout<<"enter value you want to push into stack : "<<endl;
//	cin>>a;
//	cout<<"enter value you want to push into stack : "<<endl;
//	cin>>b;
//	cout<<"enter value you want to push into stack : "<<endl;
//	cin>>c;
//	cout<<"enter value you want to push into stack : "<<endl;
//	cin>>d;
//	cout<<"enter value you want to push into stack : "<<endl;
//	cin>>e;
//	cout<<"enter value you want to push into stack : "<<endl;
//	cin>>f;
//	cout<<"enter value you want to push into stack : "<<endl;
//	cin>>g;
//	push(a);
//	push(b);
//	push(c);
//	push(d);
//	push(e);
//	push(f);
//	push(g);
//	
//	pop();
//	pop();
//	pop();
//	pop();
//	pop();
//	pop();
////	display();
//}

#include <iostream>
using namespace std;

int Stack[5];  // Array to store stack elements
int n = 5;     // Maximum size of stack
int top = -1;  // Top points to the last inserted element (-1 means empty stack)

// Check if stack is full
bool isFull() {
    return (top >= n - 1);
}

// Check if stack is empty
bool isEmpty() {
    return (top <= -1);
}

// Push operation
void push(int value) {
    if (isFull()) {
        cout << "Stack Overflow." << endl;
    } else {
        Stack[++top] = value;  // Move top up and insert value
        cout << "Value " << value << " pushed to stack." << endl;
    }
}

// Pop operation
void pop() {
    if (isEmpty()) {
        cout << "Stack Underflow." << endl;
    } else {
        cout << "Stack top element popped: " << Stack[top--] << endl;
    }
}

// Display stack elements
void display() {
    if (isEmpty()) {
        cout << "Stack is empty." << endl;
        return;
    }
    cout << "Stack elements: ";
    for (int i = 0; i <= top; i++) {
        cout << Stack[i] << " ";
    }
    cout << endl;
}

// Main function with user input
int main() {
    int choice, value;

    while (true) {
        cout << "\n1. Push\n2. Pop\n3. Display\n4. Exit\nEnter choice: ";
        cin >> choice;

        switch (choice) {
            case 1:
                cout << "Enter value to push: ";
                cin >> value;
                push(value);
                break;
            case 2:
                pop();
                break;
            case 3:
                display();
                break;
            case 4:
                return 0;
            default:
                cout << "Invalid choice. Try again.\n";
        }
    }
}

