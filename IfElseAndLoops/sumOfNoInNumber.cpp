#include<iostream>
using namespace std;
int main(){
    int n;
    cout<<"Enter value of N  : ";
    cin>>n;
    int sum = 0;
    for(int i=0;n>0;i++){
        int t = n % 10;
        sum += t;
        n /= 10;
    }
    cout<<"Sum is : "<<sum;
    return 0;
}