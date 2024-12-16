#include<iostream>
using namespace std;

int Fibo(int n){
    if(n==0){
        return 0;
    }
    if(n==1){
        return 1;
    }
    return Fibo(n-1) + Fibo(n-2);
}

int main(){
    int n;
    cout<<"Enter n :- ";
    cin>>n;
    cout<<"\nPrint fibonacci series :- ";
    for(int i=0;i<n;i++){
        cout<<Fibo(i)<<" ";
    }
    return 0;
}