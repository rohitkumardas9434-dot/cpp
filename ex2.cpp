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
    Node *head,*tail;
    head=tail=NULL;
    cout<<"Enter the nodes: "<<endl;
    for (int i = 0; i < n; i++)
    {
        cin>>x;
        Node *newNode=new Node(x);
        if (head==NULL)
        {
            head=newNode;
            tail=newNode;
        }
        else{
            tail->next=newNode;
            tail=newNode;
        }
    }
    int s;
    cout<<"Enter the sum: "<<endl;
    cin>>s;
    bool found=false;
    Node *i=head;
    while (i!=NULL && !found)
    {
        Node *j=i->next;
        while (j!=NULL)
        {
            if (i->data+j->data==s)
            {
                cout<<i->data<<","<<j->data;
                found=true;
                break;
            }
            j=j->next;
        }
        i=i->next;
    }
    if (!found)
    {
        cout<<"Node such pair found"<<endl;
    }
    
    
    return 0;
}