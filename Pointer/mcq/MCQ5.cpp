#include<iostream>
using namespace std;
int main(){
    char arr[] = "abcde";
    int size  = sizeof(arr)/sizeof(arr[0]);
    cout<<"\nsize of this array is :- "<<size;
    char *p  =  & arr[0];
    cout<<"\narray arr[size] is :- "<<p;
    p++;
    cout<<"\nafter p++ array arr[size] is :- "<<p<<endl;
    return 0;
}