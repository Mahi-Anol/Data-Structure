#include<iostream>
using namespace std;

class node{
    
    public:
        int data; 
        node* next; 
        node(int data)
        {
            this->data=data;
            next=nullptr;
        }
        void print(node*);
};

void node::print(node* head)
{
    while(head!=nullptr)
    {
        cout<<head->data<<" ";
        head=head->next;
    }
    cout<<endl;
}

int main()
{
    node a(2);
    node b(3);
    node c(4);
    node d(5);
    a.next=&b;
    b.next=&c;
    c.next=&d;
    node *head=&a;
    a.print(head);

}