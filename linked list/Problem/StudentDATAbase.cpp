#include <iostream>
using namespace std;

class Song {

	string title;
	string singer;
	float duration;
public:
	Song *next;

	void read() {
		cout << "Enter the title of the song: ";
		cin >> title;
		cout << "Enter the singer of the song: ";
		cin >> singer;
		cout<<"Enter the duration of song (in minutes):";
		cin>>duration;
		cout<<endl;
	}

	void display() {
		cout << "The title of the song : " << title << endl;
		cout << "The singer of the song : " << singer << endl;
		cout << "The duration of the song : " <<duration << endl;
		cout<<endl;
	}

	string gettitle() {
		return title;
	}
};

class Playlist {
	Song *head = nullptr;
public:
	void addsongatend() {
		Song *newnode = new Song;
		newnode->read();
		if (head == nullptr) {
			head = newnode;
		} else {
			Song *ptr = head;
			while (ptr->next != nullptr) {
				ptr = ptr->next;
			}
			newnode->next = ptr->next;
			ptr->next = newnode;
		}
	}

	void addsongatfirst()
	{
		Song *newnode=new Song;
		newnode->read();

		newnode->next=head;
		head=newnode;

	}

	void displayplaylist() {
		Song *ptr = head;
		if(head==nullptr)
		{
			cout<<"The playlist is empty ."<<endl;
			return;
		}
		else {
			while (ptr != nullptr) {
				ptr->display();
				ptr = ptr->next;
			}
		}
	}

	void deletesong(){	
		string songtodelete;
		cout<<"Enter the title of song which you want to delete :";
		cin>>songtodelete;
		if(head == nullptr)
		{
			cout<<"The playlist is empty ."<<endl;
			return;
		}
		//delete song is at head position
		if(head->gettitle()==songtodelete)
		{
			Song *temp=head;
			head=head->next;
			delete temp;
			return;
		}

		Song *previous=head;
		Song *current =head->next;
		while(current->gettitle()!=songtodelete && current->next!=NULL)
		{
			previous=previous->next;
			current=current->next;
		}
		if(current->gettitle()==songtodelete)
		{
			previous->next=current->next;
			delete current;
		}

		cout<<"\n Song is not in the playlist."<<endl;
	}
};

int main() {
	Playlist s;
    s.addsongatend();
    s.displayplaylist();
    s.addsongatfirst();
    s.displayplaylist();
    s.deletesong();
    s.displayplaylist();
	return 0;
}