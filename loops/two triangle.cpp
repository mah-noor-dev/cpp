#include <iostream>
using namespace std;

int main() {
    // Upper part of the heart
    for (int i = 0; i < 5; i++) {
        for (int j = 0; j < 4 - i; j++) {
            cout << " ";
        }
        for (int j = 0; j < 2 * i + 1; j++) {
            cout << "*";
        }
        for (int j = 0; j < 8 - 2 * i; j++) {
            cout << " ";
        }
        for (int j = 0; j < 2 * i + 1; j++) {
            cout << "*";
        }
        cout << endl;
    }
    // Lower part of the heart
    for (int i = 0; i < 4; i++) {
        for (int j = 0; j < 3 + i; j++) {
            cout << " ";
        }
        for (int j = 0; j < 7 - 2 * i; j++) {
            cout << "*";
        }
        for (int j = 0; j < 4 + 2 * i; j++) {
            cout << " ";
        }
        for (int j = 0; j < 7 - 2 * i; j++) {
            cout << "*";
        }
        cout << endl;
    }
    return 0;
}

