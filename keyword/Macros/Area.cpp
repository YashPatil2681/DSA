#include<iostream>
#define pi 3.14
using namespace std;

float Area(int radius){
    return pi*radius*radius;
}

int main(){
    int radius;
    cout<<"Enter radius :- ";
    cin>>radius;
    float area = Area(radius);
    cout<<"area is :- "<<area;
    return 0;
}