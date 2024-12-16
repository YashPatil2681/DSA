#include<iostream>
using namespace std;
bool Search(int arr[][3],int key,int row,int col){
    for(int i=0;i<row;i++){
        for(int j=0;j<3;j++){
            if(arr[i][j]==key){
                return true;
                break;
            }
        }
    }
    return false;
}
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

    if(Search(arr,key,row,col)){
        cout<<"\nElement is found ";
    }
    else{
        cout<<"\nElement is not found ";
    }
    return 0;
}