#include<iostream>
using namespace std;

class Job{
    string job;
    int priority;
    float time;
    public:
    Job* next_add;
    Job* prev_add;
    Job();
    int getPriority();
    void Read();
    void Show();
    void EnterPriority();
};

Job::Job(){
    next_add = NULL;
    prev_add = NULL;
}

void Job::Read(){
    cout<<"\nEnter job name :- ";
    cin>>job;
    cout<<"Enter priority :- ";
    cin>>priority;
    cout<<"Enter time :- ";
    cin>>time;
}

int Job::getPriority(){
    return priority;
}

void Job::Show(){
    cout<<"\njob name is :- "<<job;
    cout<<"\npriority :- "<<priority;
    cout<<"\ntime :- "<<time;
}

class DequeueJob{
    Job *f,*r;
    public:
    DequeueJob();
    void insertFront(Job* newNode);
    void insertRear(Job* newNode);
    void deleteFront();
    void deleteRear();
    void displayJob();
    void insertAccToPrio();
    void deleteAccTOPrio();
    void searchJob();
};

DequeueJob::DequeueJob(){
    f = r = NULL;
}

void DequeueJob::insertFront(Job* newNode){

    if( f == NULL ){
        f = r = newNode;
    }
    else{
        newNode->next_add = f;
        f->prev_add = newNode;
        f = newNode;
    }
}

void DequeueJob::insertRear(Job* newNode){
   
    if( r == NULL ){
        f = r = newNode;
    }
    else{
        r->next_add = newNode;
        newNode->prev_add = r;
        r = newNode;
    }
}

void DequeueJob::displayJob(){
    if(f == NULL){
        cout<<"\njob is not avalible :- ";
    }
    else{
        Job* temp;
        for(temp =f;temp!=NULL;temp = temp->next_add){
            temp->Show();
        }
        cout<<endl;
    }
}

void DequeueJob::deleteRear(){
    Job* temp = r;
    if( f == r){
        f = r = NULL;
    }
    else{
        r = r->prev_add;
        r->next_add = NULL;
    }
    delete(temp);
}

void DequeueJob::deleteFront(){
    Job* temp = f;
    if( f == r ){
        f = r = NULL;
    }
    else{
        f = f->next_add;
        f->prev_add = NULL;
    }
    delete(temp);
}

void DequeueJob::insertAccToPrio(){
    Job* newNode = new Job;
    newNode->Read();
    if( f == NULL ){
        f = r = newNode;
    }
    else if( f->getPriority() < newNode->getPriority()){
        insertFront(newNode);
    }
    else if( f->getPriority() > newNode->getPriority()){
        insertRear(newNode);
    }
    
}

void DequeueJob::deleteAccTOPrio(){
    if( f == NULL ){
        cout<<"\njob is not avalible in your list ";
        return ;
    }
    int priority;
    cout<<"\nEnter priority :- ";
    cin>>priority;
    bool flag = true;

    Job* temp = f;
    while( temp != NULL ){
        if( temp->getPriority() == priority ){
            if( temp == f ){
                deleteFront();
                //flag = false;
                return;
            }
            else if( temp == r ){
                deleteRear();
                //flag = false;
                return;
            }
            else{
                temp->prev_add->next_add = temp->next_add;
                temp->next_add->prev_add = temp->prev_add;
                delete temp;
                //flag = false;
                return;
            }
        }
        temp = temp->next_add;
    }
    cout<<endl<<priority<<" not job is found in the list :- ";
}

void DequeueJob::searchJob(){
    int priority;
    cout<<"\nEnter priority job you want to search the job :- ";
    cin>>priority;
    Job* temp = f;
    while( temp != NULL ){
        if( temp->getPriority() == priority ){
            cout<<priority<<" job is found in the list :- ";
            return ;
        }
        temp = temp->next_add;
    }
    cout<<endl<<priority<<" job is not found in the list :- ";
}

int main(){
    DequeueJob D;
    int ch;
    char Ch;

    do{
        cout<<"\n1.insert according to priority :- ";
        cout<<"\n2.delete according to priority :- ";
        cout<<"\n3.display all job :- ";
        cout<<"\n4.search job in the list :- ";
        cout<<"\nEnter your choice :- ";
        cin>>ch;
        switch (ch){
            case 1:
                D.insertAccToPrio();
                break;
            
            case 2:
                D.deleteAccTOPrio();
                break;

            case 3:
                D.displayJob();
                break;
                
            case 4:
                D.searchJob();
                break;

            default:
                cout<<"\nyou entered wrong choice :- ";
        }
    }while( ch != 5);
    

    return 0;
}