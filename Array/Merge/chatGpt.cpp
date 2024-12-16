#include<iostream>
using namespace std;

void Print(int arr[], int size) {
    for (int i = 0; i < size; i++) {
        cout << arr[i] << " ";
    }
}

void Merge(int arr1[], int size1, int arr2[], int size2, int arr[], int k) {
    int i = 0;
    int j = 0;
    while (i < size1 && j < size2) {
        if (arr1[i] < arr2[j]) { // Compare elements from arr1 and arr2
            arr[k++] = arr1[i++];
        } else {
            arr[k++] = arr2[j++];
        }
    }
    while (i < size1) {
        arr[k++] = arr1[i++];
    }
    while (j < size2) {
        arr[k++] = arr2[j++];
    }
}

int main() {
    int arr1[] = {1, 3, 5, 7, 9};
    int size1 = sizeof(arr1) / sizeof(arr1[0]);
    cout << "Size of arr1[]: " << size1 << "\nPrint arr1[]: ";
    Print(arr1, size1);

    int arr2[] = {2, 4, 6};
    int size2 = sizeof(arr2) / sizeof(arr2[0]);
    cout << "\nSize of arr2[]: " << size2 << "\nPrint arr2[]: ";
    Print(arr2, size2);

    int arr[7] = {0}; // Corrected array size
    Merge(arr1, size1, arr2, size2, arr, 0);
    cout << "\nMerge array arr: ";
    Print(arr, 7); // Print merged array

    return 0;
}
