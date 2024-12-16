//find second maxmimum number also in given array 
#include<iostream>
#include<cmath>
using namespace std;
int main(){
    int size;
    cout<<"Enter size if Array : ";
    cin>>size;
    int arr[size];
    cout<<"Enter element in the Array : ";
    for(int i=0;i<size;i++){
        cin>>arr[i];
    }
    cout<<"Print element in the Array : ";
    for(int i=0;i<size;i++){
        cout<<arr[i]<<" ";
    }
    int max = arr[0];
    int Secondmax = arr[0];
    for(int i=0;i<size;i++){
        if(max<arr[i]){
            Secondmax= max;
            max = arr[i];
        }
    }
    cout<<"\nMaximum number in array is : "<<max;
    cout<<"\nsecond maximum number in array is : "<<Secondmax;
    int min = arr[0];
    for(int i=0;i<size;i++){
        if(min>arr[i]){
            min = arr[i];
        }
    }
    cout<<"\nMinimum number in array is : "<<min;
    return 0;
};