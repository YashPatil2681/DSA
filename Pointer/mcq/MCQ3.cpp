#include<iostream>
using namespace std;
int main(){
    int first = 8;
    int second = 11;
    int *third  = &second;
    first = *third;
    *third += 2;
    cout<<first<<"  "<<second;
    return 0;
}