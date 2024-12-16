#include<iostream>
using namespace std;

int Calculate(int base,int power){
    int res = 1;
    for(int i=1;i<=power;i++){
        res *= base;
    }
    return res;
}

int main(){
    int base,power;
    cout<<"Enter base & power :- ";
    cin>>base>>power;

    int ans = Calculate(base,power);
    cout<<base<<" power "<<power<<" is :- "<<ans;
    return 0;
}