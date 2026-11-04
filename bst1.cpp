#include<iostream>
using namespace std;
struct Node
{
    int data;
    Node *left,*right;
    Node(int value){
        data=value;
        left=right=NULL;
    }
};
Node *insert(Node *root,int target){
    if (root==NULL)
    {
        Node *tmp=new Node(target);
        return tmp;
    }
    if (target<root->data)
    {
        root->left=insert(root->left,target);
    }
    else{
        root->right=insert(root->right,target);
    }
    return root;
}
bool search(Node *root, int target){
    if (root==NULL)
    {
        return 0;
    }
    if (root->data==target)
    {
        return 1;
    }
    
    if (target<root->data)
    {
        return search(root->left,target);
    }
   else
   {
      return search(root->right,target);
   }
    
}
int main()
{
    int n;
    cout<<"Enter the number of elements in the tree: "<<endl;
    cin>>n;
    int a[n];
    cout<<"Enter the elements: "<<endl;
    for (int i = 0; i < n; i++)
    {
        cin>>a[i];
    }
    //creating the BST

    Node *root=NULL;
    for (int i = 0; i < n; i++)
    {
        root=insert(root,a[i]);
    }

    //searching in a BST
    int target;
    cout<<"Enter the element you wanna search: "<<endl;
    cin>>target;
    int k=search(root,target);
    if (k==1)
    {
        cout<<"element presenet";
    }
    
    return 0;
}