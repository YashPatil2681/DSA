#include<iostream>
using namespace std;
int main(){
    int row;
    cout<<"Enter row :- ";
    cin>>row;
    int col;
    cout<<"Enter col :- ";
    cin>>col;

    float** arr = new float*[row];
    for(int i=0;i<row;i++){
        arr[i] = new float[col];
    }

    cout<<"Enter number :- "<<endl;
    for(int i=0;i<row;i++){
        for(int j=0;j<col;j++){
            cin>>arr[i][j];
        }
    }
    cout<<"\nPrint number :- "<<endl;
    for(int i=0;i<row;i++){
        for(int j=0;j<col;j++){
            cout<<arr[i][j]<<" ";
        }
        cout<<endl;
    }
    cout<<"\nnow delete the memory ";
    for(int i=0;i<row;i++){
        delete []arr[i];
    }
    delete []arr;
    return 0;
}