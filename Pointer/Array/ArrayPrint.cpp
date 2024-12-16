#include<iostream>
using namespace std;
int main(){
    int arr[4]={1,4,3,4};
    
    cout<<"Address of the total arr[] :- "<<arr;
    cout<<"\nvalue of the arr[0] :- "<<arr[0];
    cout<<"\nAddress of the arr[0] :- "<<&arr[0];
    cout<<"\nvalue at arr[1] :- "<<*arr;
    cout<<"\nvalue at arr[1] :- "<<*arr+1;
    cout<<"\nvalue at arr[1] :- "<<*(arr)+1;
    cout<<"\nvalue at arr[2] :- "<<*(arr +1);
    cout<<"\narr[4] is :- ";
    for(int i=0;i<4;i++){
        cout<<*arr + i<<" ";
    }
    return 0;
}