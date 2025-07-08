#include <iostream>
using namespace std;

int main() {
    int arr[100], n, i;

    // Input size
    cout << "Enter number of elements: ";
    cin >> n;

    // Input array
    cout << "Enter " << n << " elements:\n";
    for (i = 0; i < n; i++) {
        cin >> arr[i];
    }

    // Print array
    cout << "\nOriginal array: ";
    for (i = 0; i < n; i++) {
        cout << arr[i] << " ";
    }

    // Linear search
    int key, found = 0;
    cout << "\n\nEnter element to search (Linear Search): ";
    cin >> key;
    for (i = 0; i < n; i++) {
        if (arr[i] == key) {
            cout << "Found at index: " << i << endl;
            found = 1;
            break;
        }
    }
    if (!found) cout << "Element not found.\n";

    // Insertion at position
    int pos, value;
    cout << "\nEnter position to insert (0-based): ";
    cin >> pos;
    cout << "Enter value to insert: ";
    cin >> value;
    for (i = n; i > pos; i--) {
        arr[i] = arr[i - 1];
    }
    arr[pos] = value;
    n++;

    cout << "Array after insertion: ";
    for (i = 0; i < n; i++) {
        cout << arr[i] << " ";
    }

    // Deletion from position
    cout << "\n\nEnter position to delete (0-based): ";
    cin >> pos;
    for (i = pos; i < n - 1; i++) {
        arr[i] = arr[i + 1];
    }
    n--;

    cout << "Array after deletion: ";
    for (i = 0; i < n; i++) {
        cout << arr[i] << " ";
    }

    // Reverse array
    cout << "\n\nReversed array: ";
    for (i = n - 1; i >= 0; i--) {
        cout << arr[i] << " ";
    }

    // Bubble sort
    for (int j = 0; j < n - 1; j++) {
        for (i = 0; i < n - j - 1; i++) {
            if (arr[i] > arr[i + 1]) {
                int temp = arr[i];
                arr[i] = arr[i + 1];
                arr[i + 1] = temp;
            }
        }
    }

    cout << "\n\nSorted array (Bubble Sort): ";
    for (i = 0; i < n; i++) {
        cout << arr[i] << " ";
    }

    // Binary search (only works if sorted)
    cout << "\n\nEnter element to search (Binary Search): ";
    cin >> key;
    int low = 0, high = n - 1, mid;
    found = 0;
    while (low <= high) {
        mid = (low + high) / 2;
        if (arr[mid] == key) {
            cout << "Found at index: " << mid << endl;
            found = 1;
            break;
        } else if (arr[mid] < key) {
            low = mid + 1;
        } else {
            high = mid - 1;
        }
    }
    if (!found) cout << "Element not found.\n";

    // Find max, min, sum, average
    int max = arr[0], min = arr[0], sum = 0;
    for (i = 0; i < n; i++) {
        if (arr[i] > max) max = arr[i];
        if (arr[i] < min) min = arr[i];
        sum += arr[i];
    }
    float avg = (float)sum / n;

    cout << "\nMax: " << max << ", Min: " << min;
    cout << "\nSum: " << sum << ", Average: " << avg << endl;

    return 0;
}

