#include<iostream>
using namespace std;
class node{

    public:
        int data;
        node *next;
        node(int data)
        {
            this->data=data;
            this->next=nullptr;
        }
};

void print(node* &head) // node pointer passed by referance;
                        //so main func head and this head is refers to same memory location
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
    node* a=new node(1);
    node* b=new node(2);
    node* c=new node(3);
    node* d=new node(4);

    a->next=b;
    b->next=c;
    c->next=d;

    node *head=a;
    
    print(head);

    delete a;
    delete b;
    delete c;
    delete d;
}
