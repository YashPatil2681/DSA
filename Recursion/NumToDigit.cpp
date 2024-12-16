#include<iostream>
using namespace std;

void NumToDigit(int n,string arr[]){
    if(n==0){
        return ;
    }
    int digit = n % 10;
    n /= 10;
    NumToDigit(n,arr);
    cout<<arr[digit]<<" ";
}

int main(){
    int n;
    cout<<"Enter n :- ";
    cin>>n;
    string arr[] = {"zero","One","Two","Three",
                "Four","Five","Six","Seven",
                "Eight","Nine"};
    int size = sizeof(arr)/sizeof(arr[0]);
    cout<<"\nSize of this array is :- "<<size<<endl;
    cout<<n<<" digit is in words :- ";
    NumToDigit(n,arr);
    return 0;
}