#include<iostream>
using namespace std;
int main(){
    int n;
    cout<<"Enter n :- ";
    cin>>n;

    int** arr = new int *[n];

    for(int i=0;i<n;i++){
        arr[i] = new int[n];
    }
    cout<<"Enter number of element in the matrix :- "<<endl;
    for(int i=0;i<n;i++){
        for(int j=0;j<n;j++){
            cin>>arr[i][j];
        }
    }
    cout<<"\nPrint number of element in the matrix :- "<<endl;
    for(int i=0;i<n;i++){
        for(int j=0;j<n;j++){
            cout<<arr[i][j]<<" ";
        }
        cout<<endl;
    }
    return 0;
}