//find unique element in this in c++ dont use function write code similar like me 
#include<iostream>
using namespace std;
int main(){
    int arr[] = {1,2,3,4,3,2,1};
    int size  = sizeof(arr)/sizeof(arr[0]);
    bool flag = false;
    cout<<"Size of this array is : "<<size;
    for(int i=0;i<size;i++){
        for(int j=i+1;j<size;j++){
            if(arr[i]==arr[j]){
                flag = true;
            }
        }
        if(flag==false){
        cout<<"\nyes,unique element is not found "<<arr[i];
        }
    }
    
    return 0;
}