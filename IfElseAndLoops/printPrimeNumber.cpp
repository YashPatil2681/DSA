#include<iostream>
using namespace std;
class prime_no{
    int n;
    public:
    void input();
    void prime();
};
void prime_no::input(){
    cout<<"Enter value of N : ";
    cin>>n;
}

void prime_no::prime(){
    for(int i=2;i<=n;i++){
        int flag=0;
        for(int j=2;j<i;j++){
            if(i%j==0){
                flag=1;
            }
        }
        if(flag==0){
            cout<<i<<"  ";
        }
    }
}
int main(){
    prime_no p;
    p.input();
    p.prime();
    return 0;
}