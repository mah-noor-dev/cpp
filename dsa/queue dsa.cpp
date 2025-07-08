#include <iostream>
using namespace std;

int queue[100];
int n = 100;
int front = -1, rear = -1;

void insert() {
    if (rear == n - 1) {
        cout << "Queue Overflow"<<endl;
        
    } else {
        int x;
        cout << "Enter value: ";
        cin >> x;
        if (front == -1) front = 0;
        rear++;
        queue[rear] = x;
    }
}

void deleteElement() {
    if (front == -1 || front > rear) {
        cout << "Queue Underflow"<<endl;
    } else {
        front++;
    }
}

void display() {
    if (front == -1 || front > rear) {
        cout << "Queue is empty";
    } else {
        for (int i = front; i <= rear; i++)
            cout << queue[i] << " ";
        cout << endl;
    }
}

int main() {
    int choice;
    while (true) {
    	
        cout << "1. Insert"<<endl<<"2. Delete"<<endl<<"3. Display"<<endl<<"4. Exit"<<endl;
        cin >> choice;       
        switch (choice) {
            case 1:
                insert();
                break;
            case 2:
                deleteElement();
                break;
            case 3:
                display();
                break;
            case 4:
                return 0;
            default:
                cout << "Invalid choice"<<endl;
        }
    }
}

