#include<iostream>
#define pi 3.14
using namespace std;
int main(){
    int r;
    cout<<"Enter radius of sphere :- ";
    cin>>r;
    float volume = (4/3)*pi*r*r*r;
    cout<<"\nvolume of sphere is :- "<<volume;
    return 0;  
}