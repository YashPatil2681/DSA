#include<iostream>
using namespace std;

void ReachHome(int i,int j){
    cout<<"\n"<<i<<" location is reached "<<" total is "<<j;
    if(i==j){
        cout<<"\nlocation is complete ";
        return;
    }
    i++;
    ReachHome(i,j);
}

int main(){
    int start;
    cout<<"Enter start :- ";
    cin>>start;
    int end;
    cout<<"Enter end :-  ";
    cin>>end;
    ReachHome(start,end);
    return 0;
}