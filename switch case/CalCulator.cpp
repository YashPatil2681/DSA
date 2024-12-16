#include<iostream>
using namespace std;
int main(){
    int n1,n2;
    cout<<"Enter value of n1 & n2 : ";
    cin>>n1>>n2;
    char ch;
    string str;
    do
    {
        cout<<"Enter your choice (+)(-)(*)(/) ";
        cin>>ch;
    switch(ch){
        case '+':
            cout<<"Addition of two number is = "<<n1+n2;
            break;
        case '-':
            cout<<"Substraction of two number is = "<<n1-n2;
            break;
        case '*':
            cout<<"Multiplication of two number is = "<<n1*n2;
            break;
        case '/':
            cout<<"Division of two number is = "<<n1/n2;
            break;
        default :
            cout<<"Your choice is wrong ";
        }  
        cout<<"\nEnter str : ";
        cin>>str;      
    }
    while(str=="yes");
    return 0;
}