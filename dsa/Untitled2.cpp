#include <iostream>
using namespace std;

class Node {
public:
    const char* name;
    double price;
    Node* next;
    Node* prev;

    Node(const char* n, double p) {
        name = n;
        price = p;
        next = nullptr;
        prev = nullptr;
    }
};

void addItem(Node*& head, Node*& tail, const char* name, double price) {
    Node* newNode = new Node(name, price);
    if (head == nullptr) {
        head = tail = newNode;
    } else {
        tail->next = newNode;
        newNode->prev = tail;
        tail = newNode;
    }
}

void insertItemBefore(Node*& head, const char* targetName, const char* newName, double newPrice) {
    Node* curr = head;
    while (curr != nullptr && strcmp(curr->name, targetName) != 0) {
        curr = curr->next;
    }

    if (curr != nullptr) {
        Node* newNode = new Node(newName, newPrice);
        if (curr == head) {
            newNode->next = head;
            head->prev = newNode;
            head = newNode;
        } else {
            Node* prev = curr->prev;
            prev->next = newNode;
            newNode->prev = prev;
            newNode->next = curr;
            curr->prev = newNode;
        }
    }
}

void removeItem(Node*& head, Node*& tail, const char* name) {
    Node* curr = head;
    while (curr != nullptr && strcmp(curr->name, name) != 0) {
        curr = curr->next;
    }

    if (curr != nullptr) {
        if (curr == head && curr == tail) {
            head = tail = nullptr;
        } else if (curr == head) {
            head = head->next;
            head->prev = nullptr;
        } else if (curr == tail) {
            tail = tail->prev;
            tail->next = nullptr;
        } else {
            curr->prev->next = curr->next;
            curr->next->prev = curr->prev;
        }
        delete curr;
    }
}

void displayForward(Node* head) {
    Node* curr = head;
    while (curr != nullptr) {
        cout << curr->name << " - $" << curr->price << endl;
        curr = curr->next;
    }
}

void displayBackward(Node* tail) {
    Node* curr = tail;
    while (curr != nullptr) {
        cout << curr->name << " - $" << curr->price << endl;
        curr = curr->prev;
    }
}

int main() {
    Node* head = nullptr;
    Node* tail = nullptr;

    addItem(head, tail, "Apple", 1.5);
    addItem(head, tail, "Banana", 2.0);
    addItem(head, tail, "Mango", 3.0);

    insertItemBefore(head, "Banana", "Orange", 2.2);

    removeItem(head, tail, "Mango");

    cout << "Cart (Forward):\n";
    displayForward(head);

    cout << "\nCart (Backward):\n";
    displayBackward(tail);

    return 0;
}

