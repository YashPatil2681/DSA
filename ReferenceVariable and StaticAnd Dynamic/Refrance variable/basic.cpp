#include<iostream>
using namespace std;
int main(){
    /*   reference variable :- same memory block but different name  */
    int i ;
    cout<<"Enter variable i :- ";
    cin>>i;
    /*  now we create a reference variable name j */
    int &j = i;
    cout<<"value of i variable is :- "<<i;
    cout<<"\nreference variable of i is j :- "<<j;
    cout<<endl<<endl;

    i++;
    cout<<"\nNow,value of i is :- "<<i;
    cout<<"\nvalue of j is :- "<<j;
    cout<<"\n  \n ";

    j++;
    cout<<"\nNow,value of j is :- "<<j;
    cout<<"\nvalue of i is :- "<<i;
    cout<<"\n   \n ";

    return 0;
}