#include<iostream>
#include<cmath>
using namespace std;
int main(){
    int base,power;
    cout<<"Enter value of Base : ";
    cin>>base;
    cout<<"Enter value of Power :  ";
    cin>>power;
    int answer = pow(base,power);
    cout<<"Answer is : "<<answer;

    int ans = 1;
    for(int i = 1;i<=power;i++){
        ans *= base;
    }
    cout<<"\nAns is : "<<ans;
    if(answer == ans){
        cout<<"\nboth are match ";
    }
    else{
        cout<<"\nboth are not match ";
    }
    return 0;
}