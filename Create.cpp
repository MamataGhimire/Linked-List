#include <iostream>
#include <vector>
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

int main() {
    vector<int>arr={1,2,3,4};
    node* y=new node(arr[0],nullptr);
    cout<<y<<endl;
   cout<<y->data;
    
    

    return 0;
}
