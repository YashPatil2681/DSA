#include<iostream>
using namespace std;
int arithMetic(int n){
    for(int i =0;i<=n;i++){
        cout<<3*i+7<<" ";
    }
}

int main(){
    int n;
    cout<<"Enter valur of N : ";
    cin>>n;
    arithMetic(n);
    return 0;
}