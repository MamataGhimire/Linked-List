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
  int search(node* head,int num);

int main() {
    
    vector<int>arr={1,2,3,4};
    node* head=arryToLl(arr);
    
    int num;
    cout<<"your number"<<endl;  
    cin>>num;
    
    search(head,num);
    
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

  int search(node* head,int num)
{
    node* temp=head;
  
    while(temp)
    {
        if(temp->data==num)
        {
            cout<<"Hey!i am here.";
            return 0;
        }
        temp=temp->next;
    }
    
    cout<<"not found";
    return 0;
    
}



