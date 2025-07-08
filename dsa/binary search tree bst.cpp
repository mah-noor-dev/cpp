#include <iostream>
using namespace std;

class Node {
public:
    int data;
    Node* left;
    Node* right;
    Node(int val) {
        data = val;
        left = right = nullptr;
    }
};

Node* root = nullptr;  // Global root pointer

// Insert using void
void insert(Node* node, int val) {
    if (node == nullptr) {
        node = new Node(val);
        cout << "? Inserted!\n";
        return;
    }

    if (val < node->data)
        insert(node->left, val);
    else
        insert(node->right, val);
}

// Inorder traversal
void inorder(Node* node) {
    if (!node) return;
    inorder(node->left);
    cout << node->data << " ";
    inorder(node->right);
}

// Search using void
void search(Node* node, int key) {
    if (!node) {
        cout << "? Not Found\n";
        return;
    }
    if (node->data == key) {
        cout << "?? Found!\n";
        return;
    }

    if (key < node->data)
        search(node->left, key);
    else
        search(node->right, key);
}

// Find Min and Max
void findMinMax(Node* node) {
    if (!node) {
        cout << "Tree is empty\n";
        return;
    }

    Node* temp = node;
    while (temp->left) temp = temp->left;
    cout << "Min: " << temp->data << ", ";

    temp = node;
    while (temp->right) temp = temp->right;
    cout << "Max: " << temp->data << endl;
}

// Delete using void (simplified)
void deleteNode(Node*& node, int key) {
    if (!node) return;

    if (key < node->data) {
        deleteNode(node->left, key);
    } else if (key > node->data) {
        deleteNode(node->right, key);
    } else {
        // Node found
        if (!node->left && !node->right) {
            delete node;
            node = nullptr;
        }
        else if (!node->left) {
            Node* temp = node;
            node = node->right;
            delete temp;
        }
        else if (!node->right) {
            Node* temp = node;
            node = node->left;
            delete temp;
        }
        else {
            Node* temp = node->right;
            while (temp->left) temp = temp->left;
            node->data = temp->data;
            deleteNode(node->right, temp->data);
        }
    }
}

int main() {
    int choice, val;

    do {
        cout << "\n--- MENU ---\n";
        cout << "1. Insert\n2. Delete\n3. Search\n4. Inorder\n5. Min & Max\n6. Exit\n";
        cout << "Enter choice: ";
        cin >> choice;

        switch (choice) {
        case 1:
            cout << "Enter value: ";
            cin >> val;
            insert(root, val);
            break;
        case 2:
            cout << "Enter value to delete: ";
            cin >> val;
            deleteNode(root, val);
            cout << "? Deleted (if present).\n";
            break;
        case 3:
            cout << "Enter value to search: ";
            cin >> val;
            search(root, val);
            break;
        case 4:
            cout << "Inorder: ";
            inorder(root);
            cout << endl;
            break;
        case 5:
            findMinMax(root);
            break;
        case 6:
            cout << "Exiting...\n";
            break;
        default:
            cout << "? Invalid choice\n";
        }

    } while (choice != 6);

    return 0;
}

