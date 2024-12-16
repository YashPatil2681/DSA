#include<iostream>
using namespace std;
int Print(int *ptr){
    return *ptr;
}

void Show(int *ptr){
    cout<<"\nPrint ptr using show function  "<<ptr; /// * is used for Print value pointer
    cout<<"\nPrint *ptr using show  function "<<*ptr;
}

int main(){
    int t;
    cout<<"Enter t :- ";
    cin>>t;
    int *ptr = & t;
    int res1 = Print(ptr);
    cout<<"\nPrint *ptr is Print function "<<res1;
    Show(ptr);
    return 0;
}