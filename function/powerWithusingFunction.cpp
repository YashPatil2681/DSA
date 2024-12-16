#include<iostream>
using namespace std;
int Power(int base,int power){
    int Ans = 1;
    for(int i=1;i<=power;i++){
        Ans *= base;
    }
    return Ans;
}
int main(){
    int base,power;
    cout<<"Enter value of Base : ";
    cin>>base;
    cout<<"Enter value of power : ";
    cin>>power;
    cout<<"Ans is : "<<Power(base,power);
}