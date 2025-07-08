#include <iostream>
using namespace std;

class Node {
public:
    int data;
    Node* left;
    Node* right;

    Node(int value) {
        data = value;
        left = NULL;
        right = NULL;
    }
};

Node* root = NULL;

// Fixed Insert (pass by reference)
void insert(Node*& node, int val) {
    if (node == NULL) {
        node = new Node(val);
        return;
    }
    if (val < node->data)
        insert(node->left, val);
    else if (val > node->data)
        insert(node->right, val);
    else
        cout << " Duplicate value not inserted.\n";
}

// Inorder traversal
void inorder(Node* node) {
    if (node == NULL) return;
    inorder(node->left);
    cout << node->data << " ";
    inorder(node->right);
}

// Search
void search(Node* node, int key) {
    if (node == NULL) {
        cout << "? Not found.\n";
        return;
    }
    if (node->data == key)
        cout << "?? Found: " << key << endl;
    else if (key < node->data)
        search(node->left, key);
    else
        search(node->right, key);
}

// Find min
void findmin(Node* node) {
    if (!node) return;
    while (node->left != NULL)
        node = node->left;
    cout << "Min: " << node->data << endl;
}

// Find max
void findmax(Node* node) {
    if (!node) return;
    while (node->right != NULL)
        node = node->right;
    cout << "Max: " << node->data << endl;
}

// Delete Node (corrected + reference)
void deleteNode(Node*& node, int key) {
    if (node == NULL) {
        cout << "Tree has no such node.\n";
        return;
    }

    if (key < node->data)
        deleteNode(node->left, key);
    else if (key > node->data)
        deleteNode(node->right, key);
    else {
        // Found the node
        if (!node->left && !node->right) {
            delete node;
            node = NULL;
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
            while (temp->left)
                temp = temp->left;
            node->data = temp->data;
            deleteNode(node->right, temp->data);
        }
    }
}

int main() {
    insert(root, 10);
    insert(root, 20);
    insert(root, 11);
    insert(root, 40);
    insert(root, 70);
    insert(root, 1);

    cout << "Inorder: ";
    inorder(root); // 1 10 11 20 40 70
    cout << endl;

    search(root, 90); // Not found
    search(root, 11); // Found

    findmin(root);
    findmax(root);

    deleteNode(root, 1); // Deleting a leaf
    cout << "Inorder after deleting 1: ";
    inorder(root);
    cout << endl;
}
