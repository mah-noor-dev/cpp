#include <iostream>
using namespace std;

const int v = 5; 

void declaringarrayzero(int arr[][v]) {
    for (int i = 0; i < v; i++) {
        for (int j = 0; j < v; j++) {
            arr[i][j] = 0;
        }
    }
}

void addedge(int arr[][v], int i, int j) {
    arr[i][j] = 1;
    arr[j][i] = 1; 
}

void print(int arr[][v]) {
    cout << "Adjacency Matrix:" << endl;
    for (int i = 0; i < v; i++) {
    	cout<<i<<"         ";
        for (int j = 0; j < v; j++) {
            cout << arr[i][j] << " ";
        }
        cout << endl;
    }
}

int main() {
    int array[v][v];

    declaringarrayzero(array);

    addedge(array, 0, 1);
    addedge(array, 2, 3);
    addedge(array, 4, 1);
    addedge(array, 1, 2);

    print(array);

    return 0;
}

