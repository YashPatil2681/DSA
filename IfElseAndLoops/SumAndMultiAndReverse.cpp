#include<iostream>
using namespace std;

int Multiplication(int n){
    int Multi = 1;
    while(n > 0){
        int temp = n % 10;
        Multi *= temp;
        n /= 10;
    }
    return Multi;
}

int Sum(int n){
    int sum = 0;
    while(n > 0){
        int temp = n % 10;
        sum += temp;
        n /= 10;
    }
    return sum;
}

int Reverse(int n){
    int rev = 0;
    while(n > 0){
        int temp = n % 10;
        rev = rev * 10 + temp;
        n /= 10;
    }
    return rev;
}

int main(){
    int n;
    cout<<"Enter value of N :- ";
    cin>>n;
    int ans1 = Multiplication(n);
    cout<<"\nMultiplication is :- "<<ans1;

    int ans2 = Sum(n);
    cout<<"\nSum is :- "<<ans2;

    int ans3 = Reverse(n);
    cout<<"\nReverse is :- "<<ans3;
    return 0;
}