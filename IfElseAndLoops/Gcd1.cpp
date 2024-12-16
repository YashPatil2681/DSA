#include<iostream>
using namespace std;

int gcd(int n1,int n2){
    if(n1 == 0){
        return n2;
    }
    else if(n2 == 0){
        return n1;
    }
    else{
        while(n1 != n2){
            if(n1 > n2){
                n1 = n1 - n2;
            }
            else{
                n2 = n2 - n1;
            }
        }
    }
    return n2;
}

int lcm(int n1,int n2,int ans1){
    return (n1*n2)/ans1;
}

int main(){
    int n1,n2;
    cout<<"Enter value of n1 & n2 :- ";
    cin>>n1>>n2;
    int ans1 = gcd(n1,n2);
    cout<<"value of gcd is :- "<<ans1;

    int ans2 = lcm(n1,n2,ans1);
    cout<<"\nvalue of lcm is :- "<<ans2;
    return 0;
}