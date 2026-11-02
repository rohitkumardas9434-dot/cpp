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
Node *BinaryTree(){
    int x;
    cin>>x;
    if (x==-1)
    {
        return NULL;
    }
    
    Node *tmp=new Node(x);
    cout<<"Enter the left child of "<<x<<": ";
    tmp->left=BinaryTree();
    cout<<"Enter the right child of "<<x<<": ";
    tmp->right=BinaryTree();
    return tmp;
}
int getSize(Node *root){
    if (root==NULL)
    {
        return 0;
    }
    return (1+getSize(root->left)+getSize(root->right));
}
int main()
{
    cout<<"Enter the first node of the tree: "<<endl;
    Node *root= BinaryTree();
    cout<<"Total nodes are: "<<getSize(root);
    
    return 0;
}