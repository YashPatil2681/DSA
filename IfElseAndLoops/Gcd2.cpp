#include<iostream>
using namespace std;
int Gcd(int a,int b){
    if(a==0){
        return b;
    }
    else if(b==0){
        return a;
    }
    if(a>=0 && b>=0){
        while(b != 0){
            int temp = b;
            b = a % b;
            a = temp;
        }
        return a;
    }
    else{
        return -1;
    }
}
int main(){
    int a,b;
    cout<<"Enter a : ";
    cin>>a;
    cout<<"Enter b : ";
    cin>>b;
    int res = Gcd(a,b);
    if(res == -1){
        cout<<"\nplease enter positive input : ";
    }
    else{
        cout<<"\n";
    }
    
}