#include<iostream>
using namespace std;
int main(){
    int n;
    cout<<"Enter n : ";
    cin>>n;
    char ch[n];
    cout<<"Enter char IN ch[n] : ";
    for(int i=0;i<n;i++){
        cin>>ch[i];
    }
    cout<<"Print char ch[i] :- ";
    for(int i=0;i<n;i++){
        cout<<ch[i]<<" ";
    }
    return 0;
}