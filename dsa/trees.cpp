#include <iostream>
using namespace std;

class Node {
public:
    int data;
    Node* leftchild;
    Node* rightchild;

    Node(int value) {
        data = value;
        leftchild = NULL;
        rightchild = NULL;
    }
};

Node* root = NULL;

// Insert into BST
void insert(int data) {
    Node* temp = new Node(data);

    if (root == NULL) {
        root = temp;
        return;
    }

    Node* current = root;
    Node* parent = NULL;

    while (true) {
        parent = current;

        if (data < current->data) {
            if (current->leftchild == NULL) {
                current->leftchild = temp;
                break;
            } else {
                current = current->leftchild;
            }
        } else {
            if (current->rightchild == NULL) {
                current->rightchild = temp;
                break;
            } else {
                current = current->rightchild;
            }
        }
    }
}

// Search in BST
bool search(Node* node, int key) {
    if (node == NULL)
        return false;
    if (node->data == key)
        return true;
    else if (key < node->data)
        return search(node->leftchild, key);
    else
        return search(node->rightchild, key);
}

// Find maximum in left subtree (predecessor)
Node* findMax(Node* node) {
    while (node->rightchild != NULL)
        node = node->rightchild;
    return node;
}

// Delete node using predecessor logic
Node* deleteNode(Node* node, int key) {
    if (node == NULL) return node;

    if (key < node->data)
        node->leftchild = deleteNode(node->leftchild, key);
    else if (key > node->data)
        node->rightchild = deleteNode(node->rightchild, key);
    else {
        // Node found 
        if (node->leftchild == NULL) {
            Node* temp = node->rightchild;
            delete node;
            return temp;
        } else if (node->rightchild == NULL) {
            Node* temp = node->leftchild;
            delete node;
            return temp;
        }

        // Two children — use predecessor   
        Node* temp = findMax(node->leftchild);
        node->data = temp->data;
        node->leftchild = deleteNode(node->leftchild, temp->data);
    }

    return node;
}

// In-order Traversal
void inorderTraversal(Node* node) {
    if (node != NULL) {
        inorderTraversal(node->leftchild);
        cout << node->data << " ";
        inorderTraversal(node->rightchild);
    }
}

// Main function
int main() {
    int nofids;
    cout << "Enter number of delivery IDs to insert: ";
    cin >> nofids;

    for (int i = 0; i < nofids; i++) {
        int val;
        cout << "Enter delivery ID " << i + 1 << ": ";
        cin >> val;
        insert(val);
    }

    cout << "\nInorder Traversal of Tree: ";
    inorderTraversal(root);
    cout << endl;

    int id;
    cout << "\nEnter Delivery ID to search: ";
    cin >> id;
    if (search(root, id))
        cout << "Delivery ID " << id << " found.\n";
    else
        cout << "Delivery ID " << id << " not found.\n";

    cout << "\nEnter Delivery ID to delete: ";
    cin >> id;
    root = deleteNode(root, id);

    cout << "\nInorder Traversal after deletion: ";
    inorderTraversal(root);
    cout << endl;

    return 0;
}

