#include<iostream>
using namespace std;
bool IsEven(int a){
    if(a%2==0){
        return 0;
    }
    return 1;
}

int main(){
    int num;
    cout<<"Enter number : ";
    cin>>num;
    cout<<IsEven(num);
    return 0;
}