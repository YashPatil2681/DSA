#include<iostream>
using namespace std;
int main(){
    int n;
    cout<<"Enter value of n : ";
    cin>>n;

    int i = 0;
    int j = 0;
    while(i<=n){   
        while(j<=n){
            cout<<" * ";
            j++;
        }
        cout<<endl;
        i++;
    }
    return 0;
}