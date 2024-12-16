#include<iostream>
using namespace std;
int main(){
    char ch[] = {'a','f','d','l','s','e'};
    
    int size = sizeof(ch)/sizeof(ch[0]);
    cout<<"Print the all character :  ";
    ch[1] = '\0';
    for(int i=0;i<size;i++){
        cout<<ch[i]<<" ";
    }
    cout<<"\nSize of this array is : "<<size;
    return 0;
}