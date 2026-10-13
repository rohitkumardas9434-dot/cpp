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
    Node *tmp=head;
    bool inc=true;
    bool dec=true;
    while (tmp->next!=NULL)
    {
        if (tmp->data<tmp->next->data)
        {
            dec=false;
            
        }
        if (tmp->data>tmp->next->data)
        {
            inc=false;
            
        }
        tmp=tmp->next;
    }
    if (inc)
    {
       cout<<"Increasing"<<endl;

    }
    else if (dec)
    {
        cout<<"Decreasing"<<endl;

    }
    else
    {
        cout<<"Neither inc not dec"<<endl;
    }

    return 0;
}