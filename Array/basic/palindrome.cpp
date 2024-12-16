#include<iostream>
using namespace std;
int Palindrome(int n){
    int rev = 0;

    while(n>0){
        int rem = n % 10 ;
        rev = rev * 10 + rem;
        n /= 10;
    }
    return rev;
}
int main(){
    int num ;
    cout<<"Enter num : ";
    cin>>num;
    int res = Palindrome(num);
    if(num==res){
        cout<<"\nIt is palindrome ";
    }
    else{
        cout<<"\nIt is not palindrome ";
    }
    return 0;
}