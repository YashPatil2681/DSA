#include<iostream>
using namespace std;
int main(){
    int Divisor;
    cout<<"Enter Divisor : ";
    cin>>Divisor;
    int arr[32];  //maximum size of int is 32
    int Num;
    cout<<"Enter value of num : ";
    cin>>Num;
    int Rem;
    int i = 0; 
    while(Num>0){
        int Digit = Num % 2;
        Num /= 2;
        arr[i] = Digit;
        i++;
    }
    cout<<"\nBianary number of "<<Num<<" is : ";
    for(int j=i-1;j>=0;j--){
        cout<<arr[j]<<" ";
    }
}


///explanation :- 
//4%2==0  4/2=2 i=0 arr[0] = 0
//2%2==0  2/2=1 i=1 arr[1] = 0
//1%2==1  1/2=0 i=2 arr[2] = 1
//decimal no is :- 100
//arr[2]arr[1]arr[0]
//for(int j = i -1 ; j>=0;  j--             )
