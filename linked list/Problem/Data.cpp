#include<iostream>
using namespace std;

class Song{
    string title;
    string singer;
    float duration;
    public:
    Song* next;
    void Read();
    void Display();
    string getTitile(){
        return title;
    }
    Song(){
        next = NULL;
    }
};

void Song::Read(){
    cout<<"Enter title of song :- ";
    cin>>title;
    cout<<"Enter name of singer :- ";
    cin>>singer;
    cout<<"Enter duration of song :- ";
    cin>>duration;
    cout<<endl;
}

void Song::Display(){
    cout<<"\ntitle of song is :- "<<title;
    cout<<"\nsinger of song is :- "<<singer;
    cout<<"\nDuration of the song is :- "<<duration;
}

class Playlist{
    Song* Head = NULL;
    public:
    void songAddatEnd(){
        //create a new linked list
        Song* newNode = new Song;
        newNode->Read();
        if(Head == NULL){
            Head = newNode;
        }
        else{
            int i = 0; 
            Song *temp = Head;
            while(temp->next != NULL){
                temp = temp->next;    
            }
            newNode->next = temp->next;
            temp->next = newNode;
        }
    }
    void Display(){
        Song* temp = Head;
        while(temp != NULL){
            temp->Display();
            temp = temp->next;
        }
        cout<<endl;
    }
};

int main(){
    Playlist p;
    int ch;
    
    do{
        cout<<"Enter ch :- ";
        cin>>ch;

        switch(ch){
            case 1:
                p.songAddatEnd();
                break;
            case 2:
                p.Display();
                break;
            default:
                cout<<"Enter correct choice :- ";
                break;
        }
    }while(ch != 2);

   
    return 0;
}