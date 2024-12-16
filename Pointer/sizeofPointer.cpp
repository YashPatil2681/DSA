#include<iostream>
using namespace std;;
int main(){
    int n = 10;
    cout<<"value of n is :- "<<n;
    cout<<"\nAddress of the n Is :- "<<&n;
    
    int *ptr = &n;
    cout<<"\nValue of pointer of n is :- "<<*ptr;
    cout<<"\nSize of this pointer is :- "<<sizeof(ptr);
    
    cout<<endl<<endl<<endl;
    
    char ch = 'a';
    cout<<"\nchar ch is :- "<<ch;
    cout<<"\nAddress of the char ch :- "<<&ch;
    
    char *Ptr = &ch;
    cout<<"\nPointer of the char ch is :- "<<*Ptr;
    cout<<"\nAddress of the char ch :- "<<Ptr;
    cout<<"\nSize of this pointer is :- "<<sizeof(Ptr);
    
    return 0;
}