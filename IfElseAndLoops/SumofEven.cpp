#include<iostream>
using namespace std;
int main(){
    int n;
    cout<<"Enter value of n : ";
    cin>>n;
    int sum = 0;
    int i = 0; 
    while(i <= n){
        i %2 == 0;
        cout<<i<<"  ";
        sum += i;
        i+=2;
    }
    cout<<"\nSum is : "<<sum<<endl;
    return 0;
}