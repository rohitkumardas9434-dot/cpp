#include<iostream>
using namespace std;
struct Node{
    int data ;
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
    Node* head= new Node(x,nullptr);
    Node* temp=head;
    for (int i = 1; i < n; i++)
    {
        cin>>x;
        Node* newNode= new Node(x,nullptr);
        temp->next=newNode;
        temp=newNode;
    }
    int value;
    cout<<"Enter the value you wanna insert in the begining: "<<endl;
    cin>>value;
    Node* newNode= new Node(value, nullptr);
    newNode->next= head;
    head= newNode;
    temp=head;
    while (temp!=nullptr)
    {
        cout<<temp->data<<" ";
        temp=temp->next;
    }
    

    return 0;
}