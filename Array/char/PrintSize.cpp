#include <iostream>
using namespace std;

void Print(const char arr[], int size) {
    for (int i = 0; i < size; ++i) {
        cout << arr[i] << " ";
    }
}

int Res(const char arr[]) {
    int count = 0;
    while (arr[count] != '\0') {
        ++count;
    }
    return count;
}

int main() {
    int size;
    cout << "Enter size: ";
    cin >> size;
    char ch[size];
    cout << "Enter name: ";
    cin >> ch;
    cout << "Print all elements: ";
    Print(ch, size);
    int res = Res(ch);
    cout << "\nLength of the name: " << res;
    return 0;
}
