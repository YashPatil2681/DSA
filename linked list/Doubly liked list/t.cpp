#include<iostream>
using namespace std;

class  node
{    public:
    int data;
    node *next;
    node *prev;

};

void traverse(node *head){
    node *p = head;
    while(p!=NULL)
    {
        cout<<p-> data <<" ";
        p=p-> next;
    }
    cout<<endl;
}
//case 1
node *insertatstart(node *head,int data)
{
    node *ptr = new node;
    ptr -> data =data;
    ptr ->next =NULL;
    ptr -> prev =NULL;

    ptr -> next=head;
    ptr -> prev =NULL;
    head =ptr;
    return head;
}
//case 2
node *insertatindex(node *head,int index ,int data)
{
    node *ptr = new node ;
    ptr -> data =data;
    ptr ->next =NULL;
    ptr -> prev =NULL;
    node *p=head;

    int i=1;
    while(i!=index-1)
    {
        p = p-> next;
        i++;
    }
    ptr-> prev =p;
    ptr -> next =p -> next;
    p ->next =ptr;
    ptr -> next -> prev =ptr;
    return head;  
}
//case 3
node *insertatend(node *head,int data)
{
    node *ptr=new node;
    ptr ->data =data;
    ptr ->next =NULL;
    ptr -> prev =NULL;
    node *p =head;

    while(p->next!=NULL)
    {
        p= p->next;
    }
    ptr -> prev =p;
    ptr ->next =NULL;
    p -> next =ptr;
    return head;
}
//case 4
node *insertafter(node *head,node *prenode,int data)
{
    node *ptr =new node;
    ptr -> data =data;
    ptr ->next=NULL;
    ptr ->prev=NULL;

    ptr -> prev =prenode;
    ptr -> next =prenode -> next;
    prenode -> next =ptr;
    ptr -> next ->prev =ptr;
    return head;
}
int main(){
   
    node *head=new node;
    node *second=new node;
    node *third=new node;
    node *fourth=new node;

    head->data=67;
    head->next=second;
    head->prev=NULL;

    second->data=54;
    second->next=third;
    second->prev=head;
    
    third->data=89;
    third->next=fourth;
    third->prev=second;
    
    fourth->data=78;
    fourth->next=NULL;
    fourth->prev=third;

    traverse(head);
    head=insertatstart(head,22);
    head=insertatindex(head,2,67);
    head=insertatend(head,99);
    head=insertafter(head,third,100);
    traverse(head);
    return 0;
}