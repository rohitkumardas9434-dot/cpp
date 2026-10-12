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
    Node *tmp=head;
    head=head->next;
    delete tmp;
    Node *cur=head;
    while (cur)
    {
        cout<<cur->data<<" ";
        cur=cur->next;
    }
    
    return 0;
}