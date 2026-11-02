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
int CountLeaf(Node *root){
    if (root==NULL)
    {
        return 0;
    }
    if (root->left==NULL && root->right==NULL)
    {
        return 1;
    }
    else
    return ( CountLeaf(root->left)+ CountLeaf(root->right));
}
int CountNonLeaf(Node *root){
    if (root==NULL)
    {
        return 0;
    }
    if (root->left==NULL && root->right==NULL)
    {
        return 0;
    }
    else
    return (1+CountNonLeaf(root->left)+CountNonLeaf(root->right));
    
}
int main()
{
    cout<<"Enter the first node of the tree: "<<endl;
    Node *root=BinaryTree();
    cout<<"Total leafs present are: "<<CountLeaf(root)<<endl;
    cout<<"Total non leafs present are: "<<CountNonLeaf(root)<<endl;

    
    return 0;
}