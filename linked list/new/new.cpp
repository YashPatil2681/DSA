#include<iostream>
using namespace std;

class Song{
    string song;
    string singer;
    string duration;
    public:
    Song* next_add;
    Song();
    void read();
    void show();
    string getTitle();
    ~Song(){}
};

Song::Song(){
    next_add = NULL;
}

void Song::read(){
    cout<<"\nEnter song name  :- ";
    cin>>song;
    cout<<"Enter song singer :- ";
    cin>>singer;
    cout<<"Enter song duration :- ";
    cin>>duration;
}

void Song::show(){
    cout<<"\nsong is :- "<<song;
    cout<<"\nsong singer is :- "<<singer;
    cout<<"\nsong duration is :- "<<duration;
}

string Song::getTitle(){
    return song;
}

class playlist{
    Song* head;
    public:
    playlist();
    void add_song();
    void disp_song();
    void delete_song();
    void play_specific();
    ~playlist(){}
};

playlist::playlist(){
    head = NULL;
}

void playlist::add_song(){
    Song* newNode = new Song;
    newNode->read();
    if ( head == nullptr ){
        head = newNode;
    }
    else {
        Song* curr;
        for (curr = head ; curr->next_add != NULL ; curr = curr->next_add );
        curr->next_add = newNode;
    }
}

void playlist::delete_song(){
    string delSong;
    cout<<"\nenter del song :- ";
    cin>>delSong;
    Song* curr;
    Song* prev = NULL;
    for ( curr = head ; curr != NULL ; prev = curr,curr = curr->next_add ){
        if ( delSong == curr->getTitle()){
            if ( curr == head){
                head = curr->next_add;
                delete curr;
            }
            else{
                prev->next_add = curr->next_add;
                curr->next_add = NULL;
                delete curr;
            }
        }
    }
}

void playlist::play_specific(){
    Song* curr;
    string play_song;
    cout<<"\nEnter song which you want to play :- ";
    cin>>play_song;
    for ( curr = head ; curr != NULL ; curr = curr->next_add ){
        if ( curr->getTitle() == play_song ){
            curr->show();
            return ;
        }
    }
    cout<<"\n"<<play_song<<" is not found in a playlist :- ";
}

void playlist::disp_song(){
    Song* temp = head;
    while ( temp != NULL ){
        temp->show();
        temp = temp->next_add;
    }
    cout<<endl;
}

int main(){
    playlist P;
    int ch;
    char CH;
    do{
        cout<<"\n(1) add song in play list :- ";
        cout<<"\n(2) delete song in play list :- ";
        cout<<"\n(3) print song in play list :- ";
        cout<<"\n(4) play a spaecific song in a play list :- ";
        cout<<"\nEnter choice :- ";
        cin>>ch;

        switch( ch ){
            case 1:
                P.add_song();
                break;
            
            case 2:
                P.delete_song();
                break;
            
            case 3:
                P.disp_song();
                break;
            
            case 4:
                P.play_specific();
                break;

            default:
                cout<<"\nyou entered wrong choice :- ";
                break;
        }
        cout<<"\ndo you want to continue or not :- ";
        cin>>CH;
    }while( CH == 'y');

    return 0;
}