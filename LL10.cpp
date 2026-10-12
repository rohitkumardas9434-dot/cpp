#include<iostream>
using namespace std;
struct Node
{
    int data;
    Node *next;
    Node(int value){
        data = value;
        next= NULL;
    }
};

int main()
{
    int n;
    cout<<"Enter the number of nodes: "<<endl;
    cin>>n;
    Node *head=NULL;
    Node *tail=NULL;
    cout<<"Enter the nodes: "<<endl;
    for (int i = 0; i < n; i++)
    {
        int x;
        cin>>x;
        Node *tmp=new Node(x);
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
    int k;
    cout<<"At which position you want to delete: "<<endl;
    cin>>k;
    if (k==1)
    {
        Node *tmp=head;
        head=head->next;
        delete tmp;
    }
    else
    {
    Node *cur=head;
    Node *pre=NULL;
    k--;
    while (k--)
    {
        pre=cur;
        cur=cur->next;
    }
    pre->next=cur->next;
    delete cur;
   }
    Node *j=head;
    while (j)
    {
        cout<<j->data<<" ";
        j=j->next;
    }
    
    return 0;
}