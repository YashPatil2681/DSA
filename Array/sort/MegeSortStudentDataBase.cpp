#include<iostream>
using namespace std;

class Employee{
    int emp_id;
    string name;
    float salary;
    public:
    void read();
    void Print();
    friend void Merge(Employee E[],int ,int,int,int);
    friend void mergeSort(Employee E[] ,int,int,int );
};

void Employee::read(){
    cout<<endl;
    cout<<"Enter emp_id :- ";
    cin>>emp_id;
    cout<<"Enter name :- ";
    cin>>name;
    cout<<"Enter salary :- ";
    cin>>salary;
}
void Employee::Print(){
    cout<<"\n";
    cout<<"Name is :- "<<name;
    cout<<"\nemp_id is :- "<<emp_id;
    cout<<"\nsalary is :- "<<salary;
}

void Merge(Employee E[],int n,int start,int end,int mid){
    int left = start;
    int high = end;
    int right = mid + 1;
    Employee e[n];
    int i = 0;

    while(left <= mid && right <= end){
        if(E[left].name < E[right].name){
            e[i++].name = E[left++].name;
        }
        else{
            e[i++].name = E[right++].name;
        }
    }

    while( left <= mid){
        e[i++] = E[left++];
    }

    while( right <= end ){
        e[i++] = E[right++];
    }

    for(int j = start ; j <= end ; j++){
        E[j] = e[j-start]; 
    }
}

void MergeSort(Employee E[],int n,int start,int end){
    if(start >= end){
        return ;
    }
    int mid = (start+end)/2;
    //left part
    MergeSort(E,n,start,mid);
    //right part
    MergeSort(E,n,mid+1,end);
    //
    Merge(E,n,start,end,mid);
}

int main(){
    int n;
    cout<<"Enter n :- ";
    cin>>n;
    Employee* E = new Employee[n];
    cout<<"Enter data :- ";
    for(int i=0;i<n;i++){
        E[i].read();
    }
    int start = 0;
    int end  = n - 1;  
    MergeSort(E,n,start,end);
    n++; 
    cout<<"Print data :- ";
    for(int i=0;i<n;i++){
        E[i].Print();
    }
        
}