#include<iostream>
using namespace std;

void Print(string arr,int i, int j){
    if(i > j){
        return;
    }
    cout<<arr[i]<<" ";
    Print(arr,i+1,j);
}
void Reversse(string& arr,int i,int j){
    if(i > j){
        return ;
    }
    swap(arr[i],arr[j]);
    Reversse(arr,i+1,j-1);
}
int main(){
    string name;
    cout<<"Enter string :- ";
    cin>>name;
    int i = 0;
    int j = name.length()-1;
    cout<<"\nPrint name :- ";
    Print(name,i,j);
    Reversse(name,i,j);
    cout<<"\nPrint Reverse string :- ";
    Print(name,i,j);
    return 0;
}