#include <iostream>
using namespace std;

void swap(int &a, int &b) {
    int temp = a;
    a = b;
    b = temp;
}

void heapify(int arr[], int n, int i) {
    int largest = i;       // Assume root is largest
    int left = 2*i + 1;
    int right = 2*i + 2;

    if (left < n && arr[left] > arr[largest])
        largest = left;

    if (right < n && arr[right] > arr[largest])
        largest = right;

    if (largest != i) {
        swap(arr[i], arr[largest]);
        heapify(arr, n, largest);
    }
}

void buildMaxHeap(int arr[], int n) {
    for (int i = n/2 - 1; i >= 0; i--)
        heapify(arr, n, i);
}

void heapSortDescending(int arr[], int n) {
    buildMaxHeap(arr, n);  // Step 1: Build Max Heap

    cout << "Sorted (descending): ";
    for (int i = n - 1; i >= 0; i--) {
        cout << arr[0] << " ";      // Print max element
        arr[0] = arr[i];            // Replace root with last
        heapify(arr, i, 0);         // Heapify remaining part
    }
    cout << endl;
}

int main() {
    int arr[] = {35, 32, 36, 33, 31, 30};
    int n = sizeof(arr) / sizeof(arr[0]);

    heapSortDescending(arr, n);

    return 0;
}

