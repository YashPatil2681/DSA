#include<iostream>
using namespace std;
int main(){
    int row;
    cout<<"Enter number of row :- ";
    cin>>row;
    int col;
    cout<<"Enter number of col :- ";
    cin>>col;
    char** arr = new char*[row];
    for(int i=0;i<row;i++){
        arr[i] = new char[col];
    }
    cout<<"Enter character in this array is s:- "<<endl;
    for(int i=0;i<row;i++){
        for(int j=0;j<col;j++){
            cin>>arr[i][j];
        }
    }
    cout<<"\nPrint character in this array is :- "<<endl;
    for(int i=0;i<row;i++){
        for(int j=0;j<col;j++){
            cout<<arr[i][j]<<" ";
        }
        cout<<"\n";
    }
    cout<<"\nnow,we col delete memory of array :- ";
    for(int i=0;i<row;i++){
        delete []arr[i];
    }
    cout<<"\nnow,we delete memory of row's int this array :- ";
    delete []arr;
    cout<<"\nnow,we delete memory successfully arr[i][j] ";
    return 0;
}