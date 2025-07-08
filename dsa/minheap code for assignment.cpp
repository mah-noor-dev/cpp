#include <iostream>
using namespace std;

struct Heap {
    int* data;
    int maxSize;
    int currentSize;
};

Heap* createHeap(int maxSize) {
    Heap* h = new Heap;
    h->data = new int[maxSize];
    h->maxSize = maxSize;
    h->currentSize = 0;
    return h;
}

void swapValues(int& x, int& y) {
    int temp = x;
    x = y;
    y = temp;
}

void heapifyUp(Heap* h, int index) {
    int smallest = index;
    int leftChild = 2 * index + 1;
    int rightChild = 2 * index + 2;

    if (leftChild < h->currentSize && h->data[leftChild] < h->data[smallest])
        smallest = leftChild;

    if (rightChild < h->currentSize && h->data[rightChild] < h->data[smallest])
        smallest = rightChild;

    if (smallest != index) {
        swapValues(h->data[index], h->data[smallest]);
        heapifyUp(h, smallest);
    }
}
void insertToHeap(Heap* h, int val) {
    if (h->currentSize == h->maxSize) {
        cout << "Heap is full. Cannot add more values." << endl;
        return;
    }
    int index = h->currentSize++;
    h->data[index] = val;

    while (index != 0 && h->data[(index - 1) / 2] > h->data[index]) {
        swapValues(h->data[index], h->data[(index - 1) / 2]);
        index = (index - 1) / 2;
    }
}
int removeMin(Heap* h) {
    if (h->currentSize == 0) {
        cout << "Heap is empty." << endl;
        return -1;
    }
    int minValue = h->data[0];
    h->data[0] = h->data[h->currentSize - 1];
    h->currentSize--;
    heapifyUp(h, 0);
    return minValue;
}
void sortArrayAscending(int input[], int length) {
    Heap* h = createHeap(length);

    for (int i = 0; i < length; i++) {
        insertToHeap(h, input[i]);
    }
    cout << "Sorted array in ascending order: ";
    for (int i = 0; i < length; i++) {
        cout << removeMin(h) << " ";
    }
    cout << endl;
}

int main() {
    int numbers[] = {35, 32, 36, 33, 31, 30};
    int size = sizeof(numbers) / sizeof(numbers[0]);

    sortArrayAscending(numbers, size);

    return 0;
}

