
#include<iostream>
using namespace std;
int main(){
    int n;
    cout<<"Enter value of N :  ";
    cin>>n;
    
    for(int i = 0;i<=n;i++){
        for(int j=0;j<=i;j++){
            cout<<i-j<<"  ";
        }
        cout<<endl;
    }
        return 0;
}