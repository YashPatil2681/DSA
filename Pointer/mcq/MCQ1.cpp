#include<iostream>
using namespace std;
int main(){
    int first = 10;
    int *ptr = &first;
    cout<<"*ptr is :- "<<(*ptr)++<<endl;
    cout<<"first is :- "<<first;
    return 0;
}