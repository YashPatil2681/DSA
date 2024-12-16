#include<iostream>
using namespace std;
int Gcd(int a,int b){
    if(a==0){
        return a;
    }
    else if(b==0){
        return a;
    }
    while(a != b){
        if(a>b){
            a = a - b;
        }
        else{
            b = b - a;
        }
    }
    return a;
}
int Lcm(int a,int b,int gcd){
    // gcd * lcm = a * b
    return (a*b)/gcd;
}
int main(){
    int a;
    cout<<"Enter a :- ";
    cin>>a;
    int b;
    cout<<"Enter b :- ";
    cin>>b;
    int rs1 = Gcd(a,b);
    cout<<"\nGcd is :- "<<rs1;
    int rs2 = Lcm(a,b,rs1);
    cout<<"\nLcm is :- "<<rs2;
    return 0;
}