#include<iostream>
using namespace std;
struct Node
{
    int data;
    Node *next;
    Node(int value){
        data = value;
        next=NULL;
    }
};

int main()
{
    int n;
    cout<<"Enter how many nodes: "<<endl;
    cin>>n;
    Node *head=nullptr;
    Node *tail=nullptr;
    cout<<"Enter the nodes: "<<endl;
    for (int i = 0; i < n; i++)
    {
        int x;
        cin>>x;
        Node *tmp= new Node(x);
        if (head==nullptr)
        {
            head=tmp;
            tail=tmp;

        }
        else
        {
            tail->next=tmp;
            tail=tmp;
        }
    }
    if (head!=nullptr)
    {
        if (head->next==NULL)
        {
            Node *tmp=head;
            delete tmp;
            head=NULL;
        }
        else
        {
            Node *cur=head;
            Node *pre=nullptr;
            while (cur->next!=nullptr)
            {
                pre=cur;
                cur=cur->next;
            }
            delete cur;
            pre->next=nullptr;
        }
    }
    Node *j=head;
    while (j)
    {
        cout<<j->data<<" ";
        j=j->next;
    }
    
    
    return 0;
}