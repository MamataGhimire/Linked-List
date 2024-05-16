// Online C++ compiler to run C++ program online
#include <iostream>
#include <vector>
using namespace std;

struct node{
    
    public:
    int data;
    node* next;
    
    public:
    node(int data1,node* next1)
    {
        data=data1;
        next=next1;
    }
    
    public:
     node(int data1)
    {
        data=data1;
    }
    
};

void arryToLl(vector<int>arr);

int main() {
    
    vector<int>arr={1,2,3,4};
    arryToLl(arr);
   
    return 0;
}

 void arryToLl(vector<int>arr)
{
    node* head=new node(arr[0]);
    node* mover=head;
    
    for(int i=1;i<arr.size();i++)
    {
        node* temp=new node(arr[i]);
        mover->next=temp;
        mover=temp;
    }
    
}

