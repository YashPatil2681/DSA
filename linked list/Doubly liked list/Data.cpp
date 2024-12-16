#include<iostream>
#include<string>
using namespace std;

class Song{
    string S_name;
    string S_singer;
    float duration;
    public:
    Song* next_add;
    Song* prev_add;
    void read();
    void print();
    Song(){
        next_add = NULL;
        prev_add = NULL;
    }
    ~Song(){}
    string getTitle();
};

void Song::read(){
    cout<<endl;
    cout<<"Enter name of song :- ";
    cin>>S_name;
    cout<<"Enter singer of song :- ";
    cin>>S_singer;
    cout<<"Enter duration of song :- ";
    cin>>duration;
    cout<<endl;
}

void Song::print(){
    cout<<"\n";
    cout<<"\nSong Name is :- "<<S_name;
    cout<<"\nSong singer is :- "<<S_singer;
    cout<<"\nSong duration is  :- "<<duration;
    cout<<endl;
}

string Song::getTitle(){
    return S_name;
}

class Playlist{
    Song* head;
    Song* tail;
    public:
    Playlist(){
        head = NULL;
        tail = NULL;
    }
    void insertAtHead();
    void insertAtTail();
    void insertNode(int);
    void deleteNode(int);
    void Print();
};

void Playlist::insertAtHead(){
    Song* newNode = new Song;
    newNode->read();
    if(head == NULL){
        head = tail = newNode;
        return;
    }
    else{
        newNode->next_add = head;
        head->prev_add = newNode;
        head = newNode ;
    }
}

void Playlist::insertAtTail(){
    Song* newNode = new Song;
    newNode->read();
    if(tail == NULL){
        tail = head = NULL;
        return;
    }
    else{
        tail->next_add = newNode;
        newNode->prev_add = tail;
        tail = newNode;
    }
}

void Playlist::insertNode(int pos){
    if(pos == 1 ){
        insertAtHead();
        return ;
    }
    Song* temp = head;
    int i = 1;
    while(temp != NULL && i < pos-1){
        temp = temp->next_add;
        i++;
    }
    if( temp == NULL || temp->next_add == NULL){
        insertAtTail();
        return ;
    }
    Song* newNode = new Song;
    newNode->read();
    newNode->next_add = temp->next_add;
    temp->next_add->prev_add = newNode;
    temp->next_add = newNode;
    newNode->prev_add = temp;
}

void Playlist::deleteNode(int pos){
    if(pos == 1){
        Song* temp = head;
        head = temp->next_add;
        temp->next_add = NULL;
        delete temp;
    }
    else{
        int i = 1;
        Song* prev = NULL;
        Song* curr = head;
        while(curr != NULL &&  i < pos){
            prev = curr;
            curr = curr->next_add;
            i++;
        }
        prev->prev_add = NULL;
        prev->next_add = curr->next_add;
        curr->next_add = NULL;
        delete curr;
    }
}

void Playlist::Print(){
    Song* temp = head;
    while(temp != NULL){
        temp->print();
        temp = temp->next_add;
    }
    cout<<endl;
}

int main(){
    Playlist P1 ;
    int ch;
    char Ch;
   
    do{
        cout<<"\n\n\n1. add songs :- ";
        cout<<"\n2.delete song :- ";
        cout<<"\n3.print song(min):- ";
        
         cout<<"\n\nEnter ch(int) :- ";
        cin>>ch;
        switch(ch){
            case 1 :
                int pos1;
                cout<<"\n to add node Enter pos :- ";
                cin>>pos1;
                P1.insertNode(pos1);
                break;
            
            case 2:
                int pos2;
                cout<<"\n to delete node Enter pos :- ";
                cin>>pos2;
                P1.deleteNode(pos2);
                break;

            case 3:
                P1.Print();
                break;
        }
        cout<<"\n\ndo you want to continue or not(char) :- ";
        cin>>Ch;
    }while(Ch == 'y');
    
    cout<<"\nThank you !!!!! ";
    return 0;
}