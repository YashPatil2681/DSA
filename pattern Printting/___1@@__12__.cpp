#include<iostream>
using namespace std;

void PrintPattern(int size){
    for(int i=0;i<size;i++){
        for(int j=0;j<size-i;j++){
            cout<<" "<<"  ";
        }
        for(int j=0;j<=i;j++){
            cout<<j<<"  ";
        }
        cout<<endl;
    }
}

void Print(int size){
    int i = 0;
    while(i<size){
        int j = 0 ;
        while(j<size-i){
            cout<<" "<<"  ";
            j++;
        }
        int k = 0;
        while(k < i){
            cout<<i<<"  ";
            k++;
        }
        cout<<endl;
        i++;
    }   
}

int main(){
    int size;
    cout<<"Enter size :- ";
    cin>>size;
    PrintPattern(size);
    cout<<endl<<endl<<endl;
    Print(size);
    return 0;
}