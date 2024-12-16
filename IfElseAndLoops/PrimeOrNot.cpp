#include<iostream>
using namespace std;

void PrimeOrNot(int n){
    bool flag = true;
    for(int i=2;i<n;i++){
        if(n%i==0){
            cout<<"it is not prime number  :- ";
            flag = false;
            break;
        }
    }
    if(flag==true){
        cout<<"\nit is prime number :- ";
    }
}

int main(){
    int n;
    cout<<"\nEnter n :- ";
    cin>>n;
    PrimeOrNot(n);
    return 0;
}