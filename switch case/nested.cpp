#include<iostream>
using namespace std;
int main(){
    char ch='1';
    int num = 1;
    switch(ch){
        case 1:
            cout<<" first ";
            break;
        case '1': 
            switch(num)
                case 1:
                    cout<<"value of this char is 1 ";
                    break;
        default:
            cout<<" default ";
    }   
    return 0;
}