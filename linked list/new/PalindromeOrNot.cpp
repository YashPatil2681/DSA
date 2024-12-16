#include<iostream>
using namespace std;

class Node{
    public:
    int data;
    Node* next;
    Node(int);
};

Node::Node(int n){
    data = n;
    next = NULL;
}

void InsertAtHead(Node* &Head,int n){
    //create a new node
    Node *temp = new Node(n);
    temp->next = Head;
    Head = temp;
}

void InsertAtTail(Node* &Tail,int n){
    //create a new node
    Node* temp = new Node(n);
    Tail->next = temp;
    Tail = temp;
}

void InsertAtSpecific(Node* &Tail,Node* &Head,int n,int pos,int i=0){
    //
    if(pos==1){
        InsertAtHead(Head,n);
        return ;
    }
    Node* temp = Head;
    while(i < pos-1){
        temp = temp->next; 
        i++;      
    }
    if(temp->next == NULL){
        InsertAtTail(Tail,7);
        return;
    }
    Node* InsertNode = new Node(4);
    InsertNode->next = temp->next;
    temp->next = InsertNode;
}

Node* FindMiddle(Node* head){
    Node* slow = head;
    Node* fast = head;

    while ( fast != NULL && fast->next != NULL ){
        slow = slow->next;
        fast = slow->next->next;
    }
    return slow;
}

Node* reverse(Node* head){
    Node* curr = head;
    Node* prev = NULL;
    Node* temp = NULL;
    while ( curr != NULL ){
        temp = curr->next;
        curr->next = prev;
        prev = curr;
        curr = temp;
    }
    return prev;
}

bool isPalindrome(Node* &head){
    if ( head == NULL ){
        cout<<"\nlinked list is empty :- ";
    }
    //
    Node* middle = FindMiddle(head);
    Node* temp   = middle->next;
    middle->next = reverse(temp);
    Node* head1 = head;
    Node* head2 = middle->next;
    while ( head2 != NULL ){
        if( head1->data != head2->data){
            return false;
        }
        head1 = head1->next;
        head2 = head2->next;
    }
    temp = FindMiddle(head);
    middle->next = reverse(temp);
    return true;
}

void Print(Node* Head){
    //create 
    Node* temp = Head;
    while(temp != nullptr){
        cout<<temp->data<<" ";
        temp = temp->next;
    }
    cout<<endl;
}

int main(){
    Node* Node1 = new Node(1);
    Node* Head  = Node1;
     
    InsertAtHead(Head,2);
    Print(Head);
    
    if( isPalindrome(Head)){
        cout<<"\nit's palindrome :- ";
    }
    else{
        cout<<"\nit's not palindrome :- ";
    }
    return 0;
}