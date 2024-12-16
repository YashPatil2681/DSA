#include<iostream>
using namespace std;
int main(){
    int n;
    cout<<"ENter value of n : ";
    cin>>n;
    int i = 0;
    for(int i=0;i<=n;i++){
        if(i==3 || i==5){
            continue;
        }
        cout<<i<<"  ";
    }
    return 0;
}