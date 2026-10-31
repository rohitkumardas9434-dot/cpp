#include<iostream>
using namespace std;
struct Queue
{
    int *arr;
    int front,rear;
    int size;
    Queue(int n)
    {
        arr=new int[n];
        front=rear=-1;
        size=n;
    }

bool isEmpty()
{
    return front==-1;
}
bool isFull()
{
    return (rear+1)%size==front;
}
void push(int x){
   
     if (isFull())
    {
        cout<<"Queue overflow"<<endl;
        return;
    }
     else if (isEmpty())
    {
        front=rear=0;
        arr[0]=x;
        cout<<x<<" is pushed";
    }
    else
    {
        rear=(rear+1)%size;
        arr[rear]=x;
        cout<<x<<" is pushed"; 
    }
    
    
}
void pop()
{
    if (isEmpty())
    {
        cout<<"underflow"<<endl;
        return;
    }
    else if (front==rear)
    {
        front=rear=-1;
    }
    else
    {
        front=(front+1)%size;
    }
}
int start()
{
    if (isEmpty())
    {
        cout<<"Queue is empty"<<endl;
        return -1;
    }
    else
    {
        return arr[front];
    }
}
int end()
{
    if (isEmpty())
    {
        cout<<"Queue is empty"<<endl;
        return -1;
    }
    else
    {
        return arr[rear];
    }
}
};
int main()
{
    Queue q(4);
    q.push(1);
    
    return 0;
}