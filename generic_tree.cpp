#include<iostream>
#include<vector>
using namespace std;
template<typename t>class tree{
    public:
        t data;
        vector<tree<t>*>children;
        tree(t data)
        {
            this->data=data;
        }
};

void r_print(tree<char>* root)
{
    if(root==nullptr)
    {
        cout<<endl;
        return;
    }
    cout<<"Root("<<root->data<<") : ";
    if((root->children).size()==0)cout<<endl;
    for(int i=0;i<(root->children).size();i++)
    {
        cout<<root->children[i]->data<<" \n"[i==((root->children).size())-1];
    }
    
    for(int i=0;i<(root->children).size();i++)
    {
        r_print(root->children[i]);
    }
}
int main()
{
    tree<char>* n1=new tree<char>('M');
    tree<char>* n2=new tree<char>('a');
    tree<char>* n3=new tree<char>('h');
    tree<char>* n4=new tree<char>('i');

    n1->children.push_back(n2);
    n1->children.push_back(n3);
    n3->children.push_back(n4);
    
    tree<char>* n5=new tree<char>('S');
    tree<char>* n6=new tree<char>('a');
    tree<char>* n7=new tree<char>('r');
    tree<char>* n8=new tree<char>('w');
    tree<char>* n9=new tree<char>('a');
    tree<char>* n10=new tree<char>('r');

    n4->children.push_back(n5);
    n4->children.push_back(n6);
    n4->children.push_back(n7);
    n6->children.push_back(n8);
    n7->children.push_back(n9);
    n7->children.push_back(n10);

    tree<char>* n11=new tree<char>('A');
    tree<char>* n12=new tree<char>('n');
    tree<char>* n13=new tree<char>('o');
    tree<char>* n14=new tree<char>('l');

    n10->children.push_back(n11);
    n11->children.push_back(n12);
    n12->children.push_back(n13);
    n12->children.push_back(n14);

    r_print(n1);

    return 0;
}