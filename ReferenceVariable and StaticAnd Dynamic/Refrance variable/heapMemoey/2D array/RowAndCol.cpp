#include<iostream>
using namespace std;
int main(){
    int row;
    cout<<"Enter row :- ";
    cin>>row;
    int col;
    cout<<"Enter col :- ";
    cin>>col;
    int** arr = new int*[row];
    for(int i=0;i<row;i++){
        arr[i] = new int[col];
    }
    cout<<"Enter number of element in matrix :- "<<endl;
    for(int i=0;i<row;i++){
        for(int j=0;j<col;j++){
            cin>>arr[i][j];
        }
    }
    cout<<"\nPrint number of element in matrix :- "<<endl;
    for(int i=0;i<row;i++){
        for(int j=0;j<col;j++){
            cout<<arr[i][j]<<" ";
        }
        cout<<endl;
    }
    return 0;
}