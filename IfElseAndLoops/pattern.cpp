#include<iostream>
using namespace std;
int main(){
    int n;
    cout<<"Enter value of n : ";
    cin>>n;
    int i = 0;
    while(i < n){
        int j = 0;
        while(j < i){
            cout << " * " ;
            j++;
        }
        cout<<endl;
        i++;
    }
    return 0;
}