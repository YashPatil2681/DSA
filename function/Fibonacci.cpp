#include<iostream>
using namespace std;
void Fibo(int num){
    int ft=0,st=1,tt;
    cout<<ft<<" "<<st<<" ";
    for(int i=2;i<=num;i++){
        tt = ft + st;
        cout<<tt<<" ";
        ft = st;
        st = tt;
    }
}

int main(){
    int m;
    cout<<"Enter m : ";
    cin>>m;
    Fibo(m);
    return 0;
}