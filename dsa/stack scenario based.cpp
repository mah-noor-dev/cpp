#include <iostream>
using namespace std;

char Stack[5];
int n = 5;
int t = -1;

bool isFull() {
    return (t >= n - 1);
}

bool isEmpty() {
    return (t == -1);
}

void push(char value) {
    if (isFull()) {
        cout << "Stack Overflow! Cannot add more elements.\n";
    } else {
        Stack[++t] = value;
        cout << "Pushed: " << value << endl;
    }
}

void pop() {
    if (isEmpty()) {
        cout << "Stack Underflow! Stack is empty.\n";
    } else {
        cout << "Popped: " << Stack[t] << endl;
        t--;
    }
}

void peek() {
    if (isEmpty()) {
        cout << "Stack is empty. No top element.\n";
    } else {
        cout << "Top element is: " << Stack[t] << endl;
    }
}

void display() {
    if (isEmpty()) {
        cout << "Stack is empty.\n";
        return;
    }
    cout << "Stack: ";
    for (int i = 0; i <= t; i++) {
        cout << Stack[i] << " -> ";
    }
    cout << "TOP" << endl;
}

int main() {
    push('H');
    push('E');
    push('L');
    push('L');
    push('O');

    display();
    pop();
    display();
    pop();
    display();
    pop();
    display();
    pop();
    display();
    pop();
}

