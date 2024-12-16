#include<iostream>
using namespace std;
int main(){
    int n;
    cout<<"Enter value of N : ";
    cin>>n;
    int rev = 0;
    for(int i=0;n>0;i++){
        int t = n % 10;
        rev = rev * 10 + t;
        n /= 10;
    }
    cout<<"Reverse a number :  "<<rev;
    return 0;
}