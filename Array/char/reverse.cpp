#include<iostream>
using namespace std;
void Print(char ch[],int size){
    for(int i=0;i<size;i++){
        cout<<ch[i]<<" ";
    }
}

void Reverse1(char ch[],int size){
    for(int i=0;i<(size/2);i++){
        int temp = ch[i];
        ch[i]    = ch[size-i-1];
        ch[size-i-1] = temp;
    }
}

void Reverse2(char arr[],int size,int a,int b){
    for(int i=a,j=b;i<j;i++,j--){
        char temp = arr[i];
        arr[i]   = arr[j];
        arr[j]   = temp;
    }
}

int main(){
    char ch[] = {'a','s','d','f','g','h','j','k'};
    int size  = sizeof(ch)/sizeof(ch[0]);
    cout<<"Size of this array is : "<<size;
    cout<<"\nPrint array ch[size] :- ";
    Print(ch,size);
    Reverse1(ch,size);
    cout<<"\nReverse1 array ch[size] :- ";
    Print(ch,size);
    int i = 0;
    int j = size - 1;
    Reverse2(ch,size,i,j);
    cout<<"\nReverse2 array ch[size] :- ";
    Print(ch,size);
    return 0;
}