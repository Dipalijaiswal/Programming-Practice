#include <iostream>
#include <vector>
using namespace std;

class MaxHeap {
private:
    vector<int> heap;

    int parent(int i) { return (i - 1) / 2; }
    int leftChild(int i) { return 2 * i + 1; }
    int rightChild(int i) { return 2 * i + 2; }

    void heapifyUp(int i) {
        while (i > 0 && heap[parent(i)] < heap[i]) {
            swap(heap[i], heap[parent(i)]);
            i = parent(i);
        }
    }

    void heapifyDown(int i) {
        int largest = i;
        int left = leftChild(i);
        int right = rightChild(i);

        if (left < heap.size() && heap[left] > heap[largest])
            largest = left;
        if (right < heap.size() && heap[right] > heap[largest])
            largest = right;

        if (largest != i) {
            swap(heap[i], heap[largest]);
            heapifyDown(largest);
        }
    }

public:
    void insert(int key) {
        heap.push_back(key);
        heapifyUp(heap.size() - 1);
    }

    int extractMax() {
        if (heap.empty()) {
            cout << "Heap is empty!" << endl;
            return -1;
        }
        if (heap.size() == 1) {
            int maxVal = heap[0];
            heap.pop_back();
            return maxVal;
        }

        int maxVal = heap[0];
        heap[0] = heap.back();
        heap.pop_back();
        heapifyDown(0);
        return maxVal;
    }

    int getMax() {
        if (heap.empty()) {
            cout << "Heap is empty!" << endl;
            return -1;
        }
        return heap[0];
    }

    void printHeap() {
        for (int val : heap)
            cout << val << " ";
        cout << endl;
    }
};

int main() {
    MaxHeap h;
    h.insert(10);
    h.insert(20);
    h.insert(5);
    h.insert(30);

    cout << "Heap elements: ";
    h.printHeap();

    cout << "Maximum: " << h.getMax() << endl;

    cout << "Extracted Max: " << h.extractMax() << endl;

    cout << "Heap after extraction: ";
    h.printHeap();

    return 0;
}
