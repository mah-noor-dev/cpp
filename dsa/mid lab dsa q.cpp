#include <iostream>
using namespace std;

 int size = 5;  
string queue[5]; 
int front = -1, rear = -1;  


bool isFull() {
    return (rear + 1) % size == front;
}


bool isEmpty() {
    return front == -1;
}


void enqueue(string car) {
    if (isFull()) {
        cout << "Error: Queue is full. Cannot add " << car << endl;
        return;
    }
    if (front == -1) {  
        front = rear = 0;
    } else {
        rear = (rear + 1) % size;
    }
    queue[rear] = car;
    cout << car << " added to the queue." << endl;
}


void dequeue() {
    if (isEmpty()) {
        cout << " Queue is empty. No car to dequeue." << endl;
        return;
    }
    cout << queue[front] << " removed from the queue." << endl;
    if (front == rear) { 
        front = rear = -1;
    } else {
        front = (front + 1) % size;
    }
}


void display() {
    if (isEmpty()) {
        cout << "Queue is empty." << endl;
        return;
    }
    cout << "Queue: ";
    int i = front;
    while (i != rear) {
        cout << queue[i] << " ";
        i = (i + 1) % size;
    }
    cout << queue[rear] << endl;
}

int main() {

    enqueue("car1");
    enqueue("car2");
    dequeue();
  
     enqueue("car4");
    enqueue("car5");
    enqueue("car6");
   
    dequeue();
    enqueue("car7");
    enqueue("car8");
    enqueue("car9");

   
    display();

    return 0;
}

