#include<iostream>
using namespace std;

void pointer1(int *ptr1, int n) {
    cout << "Value of *ptr1 is: " << *ptr1;
    cout << "\nAddress of ptr1 is: " << &ptr1;
    cout << "\nAddress stored in ptr1 is: " << ptr1;
}

void pointer2(int **ptr2, int *ptr1, int n) {
    cout << "\nValue of **ptr2 is: " << **ptr2;
    cout << "\nAddress of ptr2 is: " << &ptr2;
    cout << "\nAddress stored in ptr2 is: " << ptr2;
    cout << "\nAddress stored in ptr1 is: " << ptr1;
}

int main() {
    int n;
    cout << "Enter value of N: ";
    cin >> n;
    int *ptr1 = &n;
    int **ptr2 = &ptr1;
    pointer1(ptr1, n);
    pointer2(ptr2, ptr1, n);
    return 0;
}
