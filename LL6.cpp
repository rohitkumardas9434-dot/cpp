#include<iostream>
using namespace std;
struct Node
{
    int data; 
    Node *next;
    Node(int value)
    {
        data =value;
        next=NULL;
    }
};

int main()
{
    
   int n;
   cout<<"Enter the size of the array: "<<endl;
   cin>>n;
   int a[n];
   cout<<"Enter the value: "<<endl;
   for (int  i = 0; i < n; i++)
   {
       cin>>a[i];
   }
   Node *head=nullptr;
   for (int i = 0; i < n; i++)
   {
      if (head==nullptr)
      {
         head = new Node(a[i]);
      }
      else
      {
         Node *tail=head;
         while (tail->next!=nullptr)
         {
            tail=tail->next;
         }
         tail->next=new Node(a[i]);
      }
   }
   Node *cur=head;
   while (cur!=nullptr)
   {
      cout<<cur->data<<" ";
      cur=cur->next;
   }
   
    return 0;
}