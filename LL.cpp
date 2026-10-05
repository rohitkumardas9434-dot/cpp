#include<iostream>
using namespace std;
struct Node
{
    int data;
    Node* next;
    Node(int data1,Node* next1){
        data= data1;
        next=next1;
    }
};


int main()
{
    int n;
    cout<<"Enter the size: "<<endl;
    cin>>n;
    int a[n];
    cout<<"Enter the array: "<<endl;
    for (int i = 0; i < n; i++)
    {
        cin>>a[i];
    }
    Node* head= new Node(a[0],nullptr);
    Node* temp= head;
    for (int i = 1; i < n; i++)
    {
        Node* newNode= new Node(a[i],nullptr);
        temp->next=newNode;
        temp=newNode;
    }
    temp=head;
    while (temp!=nullptr)
    {
        cout<<temp->data<<" ";
        temp=temp->next;
    }
    
    return 0;
}