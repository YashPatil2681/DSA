#include<iostream>
using namespace std;
bool Prime(int a){
    int found = 0;
    for(int i=2;i<a;i++){
        if(a%i==0){
            cout<<"it is not a prime number ";
            found=1;
            break;
        }
    }
    if(found==0){
        cout<<"it is prime number ";
    }
}

int main(){
    int num;
    cout<<"Enter num :  ";
    cin>>num;
    Prime(num);
}