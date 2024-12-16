#include<iostream>
using namespace std;

class Employee{
    int emp_id;
    string name;
    float salary;
    public:
    void Read();
    void Show();
    friend int Partition(Employee E[] ,int,int,int);
    friend void QuickSort(Employee E[],int ,int ,int );
};

int Partition(Employee E[],int n,int start,int end){
    int i = start;
    int j = end;
    int pivot = E[start].emp_id;

    while(i < j){
        do{
            i++;
        }while(pivot >= E[i].emp_id);
        do{
            j--;
        }while(pivot < E[j].emp_id);
        if( i < j){
            swap(E[i],E[j]);
        }
    }
    swap(E[start],E[j]);
    return j;
}

void QuickSort(Employee E[],int n,int start,int end){
    if(start < end){
        int partitionIndex = Partition(E,n,start,end+1);
        QuickSort(E,n,start,partitionIndex-1);
        QuickSort(E,n,partitionIndex+1,end);
    }
}

void Employee::Read(){
    cout<<endl;
    cout<<"Enter id of employee :- ";
    cin>>emp_id;
    cout<<"Enter name of employee :- ";
    cin>>name;
    cout<<"Enter salary of employee :- ";
    cin>>salary;
}

void Employee::Show(){
    cout<<"\n";
    cout<<"\nname :- "<<name;
    cout<<"\nid :- "<<emp_id;
    cout<<"\nsalary :- "<<salary;
}

int main(){
    int n;
    cout<<"Enter number of student :- ";
    cin>>n;

    Employee* E = new Employee[n];

    cout<<"\nEnter data :- ";
    for(int i=0;i<n;i++){
        E[i].Read();
    }
    int start = 0;
    int end = n - 1;

    QuickSort(E,n,start,end);
    
    cout<<"\nPrint data :- ";
    for(int i=0;i<n;i++){
        E[i].Show();
    }
    return 0;
}