#include <iostream>
using namespace std;

struct Node {
    char data;
    Node* next;
};

Node* top = nullptr;

void push(char value) {
    Node* newNode = new Node();
    newNode->data = value;
    newNode->next = top;
    top = newNode;
    cout << "Pushed: " << value << endl;
}

void pop() {
    if (top == nullptr) {
        cout << "Stack Underflow! Stack is empty.\n";
    } else {
        cout << "Popped: " << top->data << endl;
        Node* temp = top;
        top = top->next;
        delete temp;
    }
}

void peek() {
    if (top == nullptr) {
        cout << "Stack is empty.\n";
    } else {
        cout << "Top element is: " << top->data << endl;
    }
}

void display() {
    if (top == nullptr) {
        cout << "Stack is empty.\n";
        return;
    }
    cout << "Stack: ";
    Node* temp = top;
    while (temp) {
        cout << temp->data << " -> ";
        temp = temp->next;
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
    peek();
}

