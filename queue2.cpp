#include<iostream>
using namespace std;

struct Node
{
    int data;
    Node *next;
    Node(int value)
    {
        data = value;
        next=NULL;
    }
};
struct Queue
{
    Node *front,*rear;
    Queue(){
        front=rear=NULL;
    }
    bool isEmpty()
    {
        return front==NULL;
    }
    void push(int x){
        if (isEmpty())
        {
            front=new Node(x);
            rear=front;
            cout<<x<<" is pushed\n";
        }
        else{
            rear->next=new Node(x);
            rear=rear->next;
            cout<<x<<" is pushed\n";
        }
    }
    void pop(){
        if (isEmpty())
        {
            cout<<"Queue is empty";
            return;
        }
        else{
            Node *tmp=front;
            front=front->next;
            cout<<tmp->data<<" is deleted\n";
            delete tmp;
        }
    }

};


int main()
{
    Queue q;
    q.push(9);
    q.pop();
    q.push(19);
    q.push(90);
    q.push(93);
    Node *k=q.front;
    while (k)
    {
        cout<<k->data<<" ";
        k=k->next;
    }
    
    return 0;
}