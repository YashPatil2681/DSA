#include<iostream>
using namespace std;
int main(){
    int n = 5;
    int a = n;
    cout<<"Before a :- "<<a;
    a++;
    cout<<"\nAfter a :- "<<a;
    
    int *ptr = &a;
    cout<<"\nPointer Before *ptr :- "<<n;
    (*ptr)++;
    cout<<"\nPointer after *ptr  :- "<<n<<endl;
    
    int *qtr = ptr;
    cout<<ptr<<" = "<<qtr;
    
    return 0;
}