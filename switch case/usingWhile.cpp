#include<iostream>
using namespace std;
class Bank{
    int bal;
    string name[3];
    double Acc_no;
    public:
    void read();
    void add();
    void withdraw();
    void show();
};
void Bank::read(){
    cout<<"Enter account number : ";
    cin>>Acc_no;
    cout<<"Enter name of account holder : ";
    for(int i=0;i<3;i++){
        cin>>name[i];
    }
    cout<<"Enter balance in account :  ";
    cin>>bal;
}
void Bank::show(){
    cout<<"\nPrint account number : "<<Acc_no<<endl;
    cout<<"Print name of account holder : ";
    for(int i=0;i<3;i++){
        cout<<name[i]<<" ";
    }
    cout<<"\nPrint Present bal in account  : "<<bal;
}
void Bank::add(){
    int Add_amt;
    cout<<"\nadd amount in your account : ";
    cin>>Add_amt;
    bal += Add_amt;
    cout<<"\nTotal amount Present in your account after addition : ";
    cout<<bal;
}

void Bank::withdraw(){
    int Sub_amt;
    cout<<"\nadd amount in your account : ";
    cin>>Sub_amt;
    bal += Sub_amt;
    cout<<"\nTotal amount Present in your account after addition : ";
    cout<<bal;
}
int main(){
    Bank B;
    int choice;
    char ch;
    do{
        cout<<"1.read()\n2.add()\n3.show()\n4.withdraw";
        cout<<"\nEnter your choice ";
        cin>>choice;
        switch (choice)
        {
        case 1:
            B.read();
            break;
        case 2:
            B.add();
            break;
        case 3:
            B.show();
            break;
        case 4:
            B.withdraw();
            break;

        default:
            break;
        }
        cout<<"\ndo you want to continue or not : ";
        cin>>ch;
    } while (ch=='y'||ch=='Y');
    cout<<"Thank you !! ";
    return 0;
}