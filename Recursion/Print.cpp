#include<iostream>
using namespace std;

int Print(int n){
    cout<<n<<" ";
    if(n==0){
        return 1;
    }
    return Print(n-1);
}

int main(){
    int n;
    cout<<"Enter value of n :- ";
    cin>>n;
    Print(n);
    return 0;
}