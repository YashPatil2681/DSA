#include<iostream>
using namespace std;
int main(){
    int n;
    cout<<"Enter value of N :  ";
    cin>>n;
    for(int i=1;i<=n;i++){
        for(int j=1;j<=n-i+1;j++){
            cout<<"_"<<"  ";
        }
        for(int j=1;j<=i;j++){
            cout<<"*"<<"  ";
        }
        cout<<endl;
    }
    return 0;
}