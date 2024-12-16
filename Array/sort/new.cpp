#include <iostream>
#include <climits>
using namespace std;

void Print(int arr[], int size, int i = 0) {
    if (i >= size) {
        return;
    }
    cout << arr[i] << " ";
    Print(arr, size, i + 1);
}

int Max(int arr[], int size, int exp) {
    for (int i = 0; i < size; i++) {
        if (arr[i] > exp) {
            exp = arr[i];
        }
    }
    return exp;
}

void CountSort(int arr[], int size, int exp) {
    int output[size];
    int count[10] = {0}; // Initialize count array with zeros

    // Count occurrences of digits at the current place value
    for (int i = 0; i < size; i++) {
        count[(arr[i] / exp) % 10]++;
    }

    // Update count array to store cumulative counts
    for (int i = 1; i < 10; i++) {
        count[i] += count[i - 1];
    }

    // Build the output array using count array
    for (int i = size - 1; i >= 0; i--) {
        output[count[(arr[i] / exp) % 10] - 1] = arr[i];
        count[(arr[i] / exp) % 10]--;
    }

    // Copy the sorted elements back to the original array
    for (int i = 0; i < size; i++) {
        arr[i] = output[i];
    }
}

void RadixSort(int arr[], int size) {
    int maxVal = Max(arr, size, INT_MIN);

    // Perform counting sort for each digit place value
    for (int exp = 1; maxVal / exp > 0; exp *= 10) {
        CountSort(arr, size, exp);
    }
}

int main() {
    int arr[] = {32, 22, 13, 24, 21};
    int size = sizeof(arr) / sizeof(arr[0]);

    cout << "Original array: ";
    Print(arr, size);

    RadixSort(arr, size);

    cout << "\nSorted array: ";
    Print(arr, size);

    return 0;
}