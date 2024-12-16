#include<iostream>
using namespace std;
int main(){
    int arr[4] = {12,2,2,3};
    cout<<"\narray arr is :- "<<arr;
    
    char ch[5] = "adaf";
    cout<<"\narray ch is :- "<<ch;
    
    char *ptr  = &ch[0];
    cout<<"\nptr is :- "<<ptr;
    cout<<"\n*ptr is :- "<<*ptr;
    
    char temp = 'z';
    char *Ptr = &temp;
    cout<<"\nPtr is :- "<<Ptr;
    cout<<"\n*Ptr is :- "<<*Ptr;
    return 0;
}

//cout statement can work diiferent for int and char 
//for int it print output is address 
//for char it print output is overall array