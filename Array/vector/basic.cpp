#include<iostream>
#include<vector>
using namespace std;
int main(){
    vector<int> my = {1,2,3,3,4};
    for(int i=0;i<my.size();i++){
        cout<<my[i]<<" ";
    }
    my.push_back(10);
    cout<<endl;
    for(int i=0;i<my.size();i++){
        cout<<my[i]<<" ";
    }
    return 0;
}