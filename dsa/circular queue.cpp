#include <iostream>
using namespace std;

const int size = 5;  // Size of the circular queue
string queue[size];  // Queue array
int front = -1, rear = -1;  // Front and rear pointers

// Function to check if the queue is full
bool isFull() {
    return (rear + 1) % size == front;
}

// Function to check if the queue is empty
bool isEmpty() {
    return front == -1;
}

// Enqueue function
void enqueue(string car) {
    if (isFull()) {
        cout << "Error: Queue is full. Cannot add " << car << endl;
        return;
    }
    if (front == -1) {  // First element to be added
        front = rear = 0;
    } else {
        rear = (rear + 1) % size;
    }
    queue[rear] = car;
    cout << car << " added to the queue." << endl;
}

// Dequeue function
void dequeue() {
    if (isEmpty()) {
        cout << "Error: Queue is empty. No car to dequeue." << endl;
        return;
    }
    cout << queue[front] << " removed from the queue." << endl;
    if (front == rear) {  // Only one element left
        front = rear = -1;
    } else {
        front = (front + 1) % size;
    }
}

// Display the queue
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
    // Performing the operations
    enqueue("car1");
    enqueue("car2");
    dequeue();
    dequeue();
    enqueue("car5");
    enqueue("car6");
    enqueue("car4");
    dequeue();
    enqueue("car7");
    enqueue("car8");
    enqueue("car9");

    // Display final state of the queue
    display();

    return 0;
}

