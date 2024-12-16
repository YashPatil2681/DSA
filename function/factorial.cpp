#include<iostream>
using namespace std;
int factorial(int n){
    int ans = 1;
    for(int i=1;i<=n;i++){
        ans *= (i) ;
    }
    return ans;
}

int npr(int n,int r){
    return factorial(n)/factorial(n-r);
}

int ncr(int n,int r){
    return factorial(n)/(factorial(r)*factorial(n-r));
}
int main(){
    int n,r;
    cout<<"Enter n : ";
    cin>>n;
    cout<<"Enter r : ";
    cin>>r;
    cout<<"value of npr : "<<npr(n,r)<<endl;    
    cout<<"value of ncr is : "<<ncr(n,r);
    return 0;
}