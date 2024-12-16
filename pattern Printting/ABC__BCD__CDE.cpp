#include<iostream>
using namespace std;

void PrintPattern(int size){
    for(int i=0;i<size;i++){
        int count = i;
        for(int j=0;j<size;j++){
            cout<<char(count+65)<<" ";
            count++;
        }
        cout<<endl;
    }
}

int main(){
    int size;
    cout<<"Enter size :- ";
    cin>>size;
    PrintPattern(size);
    return 0;
}