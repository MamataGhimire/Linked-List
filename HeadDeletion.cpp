#include <iostream>
# include <vector>
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
};

   node* arr2ll(vector<int>&arr);
   void print(node* head);
   node* RemovesHead(node* head);
   
   int main() {
    
    vector<int>arr={1,2,3,4,8};
    node* head=arr2ll(arr);
    head=RemovesHead(head);
    print( head);
    return 0;
}

node* arr2ll(vector<int>&arr)
{
    node* head=new node(arr[0],nullptr);
    node* mover=head;
    for(int i=1;i<arr.size();i++)
    {
        node* temp=new node(arr[i],nullptr);
        mover->next=temp;
        mover=temp;
    }
    
  return head;
}
void print(node* head)
{
    while(head!=NULL)
    {
        cout<<head->data<<" ";
        head=head->next;
    }
    cout<<endl;
}

 node* RemovesHead(node* head)
 {
     if(head==NULL)return head;
     node* temp=head;
     head=head->next;
     delete temp;
     return head;
     
 }

