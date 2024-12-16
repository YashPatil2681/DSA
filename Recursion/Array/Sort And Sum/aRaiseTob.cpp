#include<iostream>
using namespace std;

int Power(int a,int b){
    if(b == 0){
        return 1;
    }
    return a * Power(a,b-1);
}
int main(){
    int base;
    cout<<"Enter base :- ";
    cin>>base;
    int power;
    cout<<"Enter power :- ";
    cin>>power;
    cout<<"value is :- "<<Power(base,power);
    return 0;
}