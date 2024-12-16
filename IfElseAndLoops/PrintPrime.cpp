#include<iostream>
using namespace std;

void PrintPrime(int n){
    for(int i=2;i<n;i++){
        int flag = 0;
        for(int j=2;j<i;j++){
            if(i%j == 0){
                flag = 1;
                break;
            }
        }
        if(flag == 0){
            cout<<i<<" ";
        }
    }
}

int main(){
    int n;
    cout<<"Enter n:- ";
    cin>>n;
    cout<<"prime number :- ";
    PrintPrime(n);
    return 0;
}