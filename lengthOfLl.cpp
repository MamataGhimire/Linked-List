// Online C++ compiler to run C++ program online
#include <iostream>
#include<vector>
using namespace std;

struct node
{
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
        next=nullptr;
    }
    
};

node* arryToLl(vector<int>&arr);
 int lengthOfLl(node* head);

int main() {
    vector<int>arr={1,2,3,4};
    node* head=arryToLl(arr);
    int length=lengthOfLl(head);
    cout<<length;
     return 0;
     
     
}

node* arryToLl(vector<int>&arr)
{
    node* head=new node(arr[0]);
    node* mover=head;
    for(int i=1;i<arr.size();i++)
    {
        node* temp=new node(arr[i]);
        mover->next=temp;
        mover=temp;
    }
    
    return head;
}

  int lengthOfLl(node* head)
{
    node* temp=head;
    int count=0;
    while(temp)
    {
        count++;
        temp=temp->next;
    }
    
    return count;
}



