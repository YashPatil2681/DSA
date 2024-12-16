#include<iostream>
using namespace std;
int main(){
    int n;
    cout<<"Enter value of N :  ";
    cin>>n;
    int i = 0;
    while(i<=n){
        int j = 0;
        while(j<=n-i){
            cout<<"_"<<"  ";
            j++;
        }
        while (j<=i){
            cout<<"*"<<"  ";
            j++;
        }
        cout<<endl;
        i++; 
    }
    return 0;
}