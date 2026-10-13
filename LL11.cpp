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
    int k=0;
    Node *tmp=head;
    while (tmp)
    {
        k++;

        tmp=tmp->next;
    }
    tmp=head;
    for (int i = 0; i < k/2; i++)
    {
        tmp=tmp->next;
    }
    cout<<tmp->data;
    return 0;
}