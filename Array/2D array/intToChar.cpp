#include<iostream>
using namespace std;
int main(){
    int row;
    cout<<"Enter row :- ";
    cin>>row;
    int col;
    cout<<"Enter col :- ";
    cin>>col;
    int arr[row][col];
    cout<<"Enter matrix :- "<<endl;
    for(int i=0;i<row;i++){
        for(int j=0;j<col;j++){
            cin>>arr[i][j];
        }
    }
    cout<<"Print matrix :- "<<endl;
    for(int i=0;i<row;i++){
        for(int j=0;j<col;j++){
            cout<<(char)(arr[i][j]+64)<<" ";
        }
        cout<<endl;
    }
    return 0;
}