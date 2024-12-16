#include<iostream>
using namespace std;
int main(){
    int row;
    cout<<"Enter row : ";
    cin>>row;
    int col;
    cout<<"Enter col : ";
    cin>>col;
    int arr[row][col] ;
    cout<<"ENter element :- ";
    for(int i=0;i<row;i++){
        for(int j=0;j<col;j++){
            cin>>arr[i][j];
        }
    }
    cout<<"\nPrint element :- ";
    for(int i=0;i<row;i++){
        for(int j=0;j<col;j++){
            cout<<arr[i][j]<<" ";
        }
        cout<<endl;
    }
    int sum = 0;
    for(int i=0;i<row;i++){
        for(int j=0;j<col;j++){
            sum += arr[i][j];
        }
    }
    cout<<"\nSum is "<<sum;
    return 0;
}