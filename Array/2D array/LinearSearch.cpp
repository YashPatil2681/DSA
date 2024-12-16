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
    cout<<"\nPrint input : "<<endl;
    for(int i=0;i<row;i++){
        for(int j=0;j<col;j++){
            cout<<arr[i][j]<<" ";
        }
        cout<<endl;
    }
    int key;
    cout<<"\nEnter key :- ";
    cin>>key;
    
    int flag;
    for(int i=0;i<row;i++){
        flag = 0;
        for(int j=0;j<col;j++){
            if(arr[i][j]==key){
                cout<<"\nElement is found ";
                flag = 1;
                break;
            }
        }
    }
    if(flag==0){
        cout<<"\nElement is not found ";
    }
    
    return 0;
}