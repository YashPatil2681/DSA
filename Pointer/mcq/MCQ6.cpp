#include<iostream>
using namespace std;
int main(){
    char str[] = "yashoda";
    int size   = sizeof(str)/sizeof(str[0]);
    char *ptr  = &str[0];
    cout<<"str[0] is :- "<<str<<endl;
    cout<<"\nptr[0] is :- "<<ptr;
}