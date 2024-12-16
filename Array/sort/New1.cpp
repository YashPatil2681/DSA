#include <iostream>
using namespace std;

void Print(int arr[], int size, int i = 0) {
    if (i >= size) {
        return;
    }
    cout << arr[i] << " ";
    Print(arr, size, i + 1);
}

int Partition(int arr[], int start, int end) {
    int pivot = arr[start];
    int i = start;
    int j = end;

    do {
        while (arr[i] <= pivot) {
            i++;
        }
        while (pivot < arr[j]) {
            j--;
        }
        if (i < j) {
            swap(arr[i], arr[j]);
        }
    } while (i < j);

    swap(arr[start], arr[j]);
    return j;
}

void QuickSort(int arr[], int start, int end) {
    if (start < end) {
        int partitionIndex = Partition(arr, start, end);
        QuickSort(arr, start, partitionIndex - 1);
        QuickSort(arr, partitionIndex + 1, end);
    }
}

int main() {
    int arr[] = { 9, 8, 7, 6, 5, 4, 3, 2, 1, 0 };
    int size = sizeof(arr) / sizeof(arr[0]);

    cout << "Size of this array is: " << size << endl;
    cout << "Original array: ";
    Print(arr, size);

    int start = 0;
    int end = size - 1;
    QuickSort(arr, start, end);

    cout << "\nSorted array: ";
    Print(arr, size);

    return 0;
}
