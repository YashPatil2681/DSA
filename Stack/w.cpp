#include<iostream>
using namespace std;

class Node{
    string str_address;
    public:
    Node* next_add;
    Node();
    ~Node();
    void Display_address();
    string getStr_address();
    void Read_address();
};

Node::Node(){
    next_add = NULL;
}

Node::~Node(){
    next_add = NULL;
}

void Node::Read_address(){
    cout<<"\nEnter str_address :- ";
    cin>>str_address;
}

void Node::Display_address(){
    cout<<str_address<<" ";
}

string Node::getStr_address(){
    return str_address;
}

class BrowseAddress{
    Node* top;
    public:
    BrowseAddress();
    void visitNewPage();
    string nowGetBack();
    void ShowCurrentPage();
    bool is_Full();
    bool is_Empty();
};

BrowseAddress::BrowseAddress(){
    top = NULL;
}

void BrowseAddress::visitNewPage(){
    Node* newNode = new Node ;
    newNode->Read_address();
    if( top == NULL ){
        top = newNode;
    }
    else {
        newNode->next_add = top;
        top = newNode;
    }
}

string BrowseAddress::nowGetBack(){
    string Element;
    if( is_Empty() ){
        cout<<"\nweb page is empty :- ";
        return '\0';
    }
    else{
        Node* temp = top;
        top = temp->next_add;
        string Element = temp->getStr_address();
        delete temp;
        return Element;
    }
    
}

void BrowseAddress::ShowCurrentPage(){
    if( top == NULL ){
        cout<<"\nweb page is empty :- ";
    }
    else{
        Node* temp = top;
        while(temp != NULL){
            temp->Display_address();
            temp = temp->next_add;
        }
        cout<<endl;
    }
}


bool BrowseAddress::is_Empty(){
    return top == NULL;
}

bool BrowseAddress::is_Full(){
    return false;
}

int main(){
    BrowseAddress B;
    int ch;
    char CH;
    do{
        cout<<"\n1. visitNewPage :- ";
        cout<<"\n2. ShowCurrentPage :- ";
        cout<<"\n3. nowGetBack :- ";
        cout<<"\nEnter ch :- ";
        cin>>ch;
        switch(ch){
            case 1:
                B.visitNewPage();
                break;
                
            case 2:
                B.ShowCurrentPage();
                break;
                
            case 3:
                B.nowGetBack();
                break;
                
            default:
                cout<<"\nYou entered wrong choice :- ";
        }
        cout<<"\ndo you want to cotinue or not :- ";
        cin>>CH;
    }while(CH == 'y');
    
    cout<<"\nThank You !!!! ";
    
    return 0;
}

