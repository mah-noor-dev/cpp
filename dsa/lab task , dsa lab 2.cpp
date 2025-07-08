#include <iostream>
using namespace std;

int main() {
    int arr[100] = {1, 2, 3, 4, 5, 6, 7, 8};  // Predefined values
    int size = 8;  // Correctly setting the initial size
    int choice;
    int value;

    cout << "Enter your choice: ";
    cin >> choice;

    switch (choice) {
        case 1: {  // Insert at end
            if (size < 100) {  // Prevent out-of-bounds
                cout << "Enter a value at end: ";
                cin >> value;
                arr[size] = value;
                size++;  // Increment size

                cout << "\nPrinting array:\n";
                for (int i = 0; i < size; i++) {
                    cout << arr[i] << endl;
                }
            } else {
                cout << "Array is full!\n";
            }
            break;
        }

        case 2: {  
            if (size < 100) { 
                cout << "Enter value at start: ";
                cin >> value;
                
                for (int i = size; i > 0; i--) {
                    arr[i] = arr[i - 1];  
                }
                arr[0] = value;
                size++; 
                
                cout << "\nPrinting array:\n";
                for (int i = 0; i < size; i++) {
                    cout << arr[i] << endl;
                }
            } else {
                cout << "Array is full!\n";
            }
            break;
        }

        case 3: { 
            cout << "\nPrinting array:\n";
            for (int i = 0; i < size; i++) {
                cout << arr[i] << endl;
            }
            break;
        }

        default:
            cout << "Invalid choice!\n";
    }
}

