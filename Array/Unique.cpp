#include<iostream>
using namespace std;

//a^a==0  0^a==0
// o^1==1  ans=1
//1^1==0   ans =0
//0^3==3  ans = 1 //
//4^4 ==0 ans =0 // 
//0^1 ==0
int Unique(int arr[],int size){
    int ans = 0;
    for(int i=0;i<size;i++){
        ans = ans ^ arr[i];
    }
    return ans;
}
int main(){
    int arr[] = {1,3,2,2,3,3};
    int size = sizeof(arr)/sizeof(arr[0]);
    cout<<Unique(arr,size);
}