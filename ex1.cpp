#include<iostream>
using namespace std;
struct Node
{
    int data;
    Node *next;
    Node(int value){
        data=value;
        next=NULL;
    }
};

int main()
{
    int n;
    cout<<"Enter the number of nodes: "<<endl;
    cin>>n;
    int x;
    cout<<"Enter the nodes: "<<endl;
    cin>>x;
    Node *head=new Node(x);
    Node *tmp=head;
    for (int i = 1; i < n; i++)
    {
        cin>>x;
        Node *newNode=new Node(x);
        tmp->next=newNode;
        tmp=newNode;
    }
    int j;
    cout<<"Enter the node you wanna insert: "<<endl;
    cin>>j;
    Node *k=new Node(j);
    tmp->next=k;
    
    int count=0;
    Node *l=head;
    while (l)
    {
        count++;
        cout<<l->data<<" ";
        l=l->next;
    }
    cout<<"Node count= "<<count;


    
    return 0;
}