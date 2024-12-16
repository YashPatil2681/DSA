#include<iostream>
using namespace std;
#define size 5

class stack{
    string web_address[size];
    int top ;
    public:
    stack();
    void visitNewPage(string);
    string nowGetBack();
    void ShowCurrentPage();
    bool is_Full();
    bool is_Empty();
    void deleteMiddle(int);
};

stack::stack(){
    top = -1;
}

bool stack::is_Empty(){
    if(top == -1){
        return true;
    }
    else{
        return false;
    }
}

bool stack::is_Full(){
    if( top == size-1){
        return true;
    }
    else{
        return false;
    }
}

void stack::visitNewPage(string val){
    if(is_Full()){
       cout<<"\nstack is empty :- "<<endl; 
    }
    else{
        top++;
        web_address[top] = val;
    }
}

string stack::nowGetBack(){
    string E;
    if( is_Empty() ){
        cout<<"\nstack is empty :- "<<endl;
    }
    else{
        E = web_address[top];
        top--;
    }
    return E;
}

void stack::deleteMiddle(int count){
    if ( count == (size/2)){
        nowGetBack();
        return ;
    }
    string str = nowGetBack();
    deleteMiddle(count+1);
    visitNewPage(str);
}

void stack::ShowCurrentPage(){
    for(int i = 0; i <= top; i++){
        cout<<web_address[i]<<" ";
    }
    cout<<endl;
}

int main(){
    stack s;
    int ch;
    char CH;
    int count = 0;
    
    do{
        cout<<"\n1.Visit page :- ";
        cout<<"\n2.Show current page :- ";
        cout<<"\n3.Now get back :- ";
        cout<<"\n4.delete middle :- ";
        cout<<"\nEnter your choice :- ";
        cin>>ch;
        switch(ch){
            case 1:{
                string str;
                cout<<"\nEnter string :- ";
                cin>>str;
                s.visitNewPage(str);
                break;
            }
            case 2:
                s.ShowCurrentPage();
                break;

            case 3:
                s.nowGetBack();
                break;

            case 4:
                s.deleteMiddle(count);
                break;

            default:
                cout<<"\nYou entered wrong choice :- ";
        }
        cout<<"\nDo you want to continue or no :- ";
        cin>>CH;
    }while(CH == 'y'); 

    cout<<"\nThank You!!! ";
    return 0;
}