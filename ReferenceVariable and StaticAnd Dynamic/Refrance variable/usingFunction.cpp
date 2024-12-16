#include<iostream>
using namespace std;
int& func(int a ){
    int num = a;
    int *ptr = &num;
    return *ptr;
}
int main(){
    int a;
    cout<<"Enter a :- ";
    cin>>a;
    cout<<endl<<func(a);
}