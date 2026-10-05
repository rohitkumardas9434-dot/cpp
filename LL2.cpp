#include<iostream>
using namespace std;
struct Node
{
    int data;
    Node* next;
    Node(int data1,Node* next1){
        data=data1;
        next=next1;
    }
};


int main()
{
    int n;
    cout<<"Enter the number of nodes: "<<endl;
    cin>>n;
    int x;
    cout<<"Enter the elements: "<<endl;
    cin>>x;
    Node* head = new Node(x,nullptr);
    Node* temp= head;
    for (int i = 1; i < n; i++)
    {
        cin>>x;
        Node* newNode= new Node(x,nullptr);
        temp->next= newNode;
        temp=newNode;

    }
    temp=head;
    int count=0;
    while (temp!=nullptr)
    {
        count++;
        temp=temp->next;
    }
    cout<<count<<endl;
    return 0;
}