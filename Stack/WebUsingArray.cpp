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
       cout<<"\nstack is empty :- "; 
    }
    else{
        top++;
        web_address[top] = val;
    }
}

string stack::nowGetBack(){
    string E;
    if( is_Empty() ){
        cout<<"\nstack is empty :- ";
    }
    else{
        E = web_address[top];
        top--;
    }
    return E;
}

void stack::ShowCurrentPage(){
    for(int i = 0; i <= top; i++){
        cout<<web_address[i]<<" ";
    }
    cout<<endl;
}

int main(){
    stack s;
    s.visitNewPage("val0");
    s.ShowCurrentPage();
    s.visitNewPage("val1");
    s.visitNewPage("val2");
    s.ShowCurrentPage();
    s.nowGetBack();
    s.ShowCurrentPage();
    return 0;
}