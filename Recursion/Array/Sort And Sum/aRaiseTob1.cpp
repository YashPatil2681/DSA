#include<iostream>
using namespace std;

int Power(int a,int b){
    if(b == 0){
        return 1;
    }
    else if(b == 1){
        return a;
    }
    // a raise to b is :- 
    /* if b is even :-  (a raise to b/2) * (a raise to b/2)
        else b is odd :- a * (a raise to b/2) * (a raise to b/2)
    */
   int ans = Power(a,b/2);
    if(b%2 == 0){
        return ans * ans;
    }
    else{
        return a * ans * ans;
    }
}
int main(){
    int base;
    cout<<"Enter base :- ";
    cin>>base;
    int power;
    cout<<"Enter power :- ";
    cin>>power;
    int ans = Power(base,power);

    cout<<"Ans is :- "<<ans;
    return 0;
}