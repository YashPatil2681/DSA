#include <iostream>
using namespace std;

int main() {
    int n;
    cout << "Enter value of N: ";
    cin >> n;

    for (int i = 1; i <= n; i++) {
        // Print spaces for alignment
        for (int j = 1; j <= n - i + 1; j++) {
            cout << "  ";
        }

        // Print numbers in the first half of the row
        for (int j = 1; j <= i; j++) {
            cout << j << "  ";
        }

        // Print decreasing values in the second half of the row
        int val = i - 1;
        for (int j = 1; j <= i; j++) {
            cout << val << "  ";
            val--;
        }

        cout << endl;
    }

    return 0;
}
