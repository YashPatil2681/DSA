#include<iostream>
using namespace std;

int main(){
    char ch = 'a';
    cout<<"char ch is :- "<<ch;
    cout<<"\nAddress of the char ch :- "<<&ch;
    
    char *ptr = &ch;
    cout<<"\nPointer of the char ch is :- "<<*ptr;
    cout<<"\nAddress of the char ch :- "<<ptr;
    
    return 0;
}