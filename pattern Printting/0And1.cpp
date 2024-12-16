#include<iostream>
using namespace std;

void PrintPattern(int size){
    for(int i=0; i<size; i++){
        for(int j=0; j<size; j++){
            if((i+j) % 2 == 0){
                cout << " 0 ";
            } else {
                cout << " 1 ";
            }
        }
        cout << endl; // Add a newline after each row
    }
}

int main(){
    int size;
    cout << "Enter size: ";
    cin >> size;
    PrintPattern(size);
    return 0;
}
