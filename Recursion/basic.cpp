/*  A function calling itself are known as Recursion 
    base case is manadotory
*/

#include<iostream>
using namespace std;

int GetSum(int n){
    if(n==1){
        return 1;
    }
    return n + GetSum(n-1); //function calling calling it self 
}

int GetFact(int n){
    if(n==0){
        return 1;
    }
    return n * GetFact(n-1);
}

int Power(int n){
    if(n==0){
        return 1;
    }
    return 3 * Power(n-1);
}
int main(){
    int n;
    cout<<"Enter n :- ";
    cin>>n;
    cout<<"Sum is :- "<<GetSum(n)<<endl;
    cout<<n<<" Factorial is :- "<<GetFact(n)<<endl;
    cout<<"3 power  "<<n<<" is :- "<<Power(n);
    return 0;
}