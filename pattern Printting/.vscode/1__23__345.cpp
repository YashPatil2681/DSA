#include<iostream>
using namespace std;
int main(){
    int n;
    cout<<"Enter value of N  :  ";
    cin>>n;
    int row = 1;
    for(int i=0;i<=n;i++){
        int col = 1;
        int val = row;
        for(int j=0;j<=i;j++){
            cout<<val<<"  ";
            col++;
            val++;
        }
        cout<<endl;
        row++;
    }
    return 0;
}