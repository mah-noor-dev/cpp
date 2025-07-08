#include<iostream>
using namespace std;

int main() {
    int size = 5;
    string arr[5];
    int i;
    int front = -1, rear = -1;

    // Enqueue 2 elements: car1 and car2
    for (int i = 0; i < 2; i++) {
        string val;
        cout << "Enter element (car): ";
        cin >> val;

        // Check if full
        if ((rear + 1) % size == front) {
            cout << "Queue is full!\n";
        } else {
            if (front == -1) front = 0; // first element
            rear = (rear + 1) % size;
            arr[rear] = val;
        }
    }

    // Display queue
    cout << "Queue: ";
    int i = front;
    while (true) {
        cout << arr[i] << " ";
        if (i == rear) break;
        i = (i + 1) % size;
    }
    cout << endl;

    // Dequeue 2 elements
    for (int d = 0; d < 2; d++) {
        if (front == -1) {
            cout << "Queue is empty!\n";
        } else {
            cout << "Deleted: " << arr[front] << endl;
            if (front == rear) {
                front = rear = -1; // only one element was present
            } else {
                front = (front + 1) % size;
            }
        }
    }

    // Display again
    if (front == -1) {
        cout << "Queue is empty now.\n";
    } else {
        cout << "Queue after deletion: ";
        int i = front;
        while (true) {
            cout << arr[i] << " ";
            if (i == rear) break;
            i = (i + 1) % size;
        }
        cout << endl;
    }

    // Enqueue 3 more elements: car5, car6, car4
    string cars[] = {"car5", "car6", "car4"};
    for (int i = 0; i < 3; i++) {
        string val = cars[i];
        cout << "Enqueueing: " << val << endl;

        // Check if full
        if ((rear + 1) % size == front) {
            cout << "Queue is full!\n";
        } else {
            if (front == -1) front = 0; // first element
            rear = (rear + 1) % size;
            arr[rear] = val;
        }
    }

    // Display queue after enqueueing
    cout << "Queue after enqueue: ";
    int i = front;
    while (true) {
        cout << arr[i] << " ";
        if (i == rear) break;
        i = (i + 1) % size;
    }
    cout << endl;

    // Dequeue one element
    if (front != -1) {
        cout << "Deleted: " << arr[front] << endl;
        if (front == rear) {
            front = rear = -1; // only one element was present
        } else {
            front = (front + 1) % size;
        }
    }

    // Enqueue car7, car8
    string cars2[] = {"car7", "car8"};
    for (int i = 0; i < 2; i++) {
        string val = cars2[i];
        cout << "Enqueueing: " << val << endl;

        // Check if full
        if ((rear + 1) % size == front) {
            cout << "Queue is full!\n";
        } else {
            if (front == -1) front = 0; // first element
            rear = (rear + 1) % size;
            arr[rear] = val;
        }
    }

    // Attempt to enqueue car9 (should fail since the queue is full)
    string car9 = "car9";
    cout << "Attempting to enqueue: " << car9 << endl;
    if ((rear + 1) % size == front) {
        cout << "Queue is full! Cannot enqueue " << car9 << endl;
    } else {
        rear = (rear + 1) % size;
        arr[rear] = car9;
    }

    // Display final queue
    cout << "Final Queue: ";
    i = front;
    while (true) {
        cout << arr[i] << " ";
        if (i == rear) break;
        i = (i + 1) % size;
    }
    cout << endl;

    return 0;
}

