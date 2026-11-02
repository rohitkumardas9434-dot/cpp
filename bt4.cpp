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
    if(x==-1){
        return NULL;
    }
    Node *tmp=new Node(x);
    cout<<"Enter the left child of "<<x<<": ";
    tmp->left=BinaryTree();
    cout<<"Enter the right child of "<<x<<": ";
    tmp->right=BinaryTree();
    return tmp;
}
void Preorder(Node *root){
    if (root==NULL)
    {
        return;
    }
    cout<<root->data<<" ";
    Preorder(root->left);
    Preorder(root->right);
}
void postorder(Node *root){
    if (root==NULL)
    {
        return;
    }
    postorder(root->left);
    
    postorder(root->right);
    cout<<root->data<<" ";

}
void inorder(Node *root){
    if (root==NULL)
    {
        return;
    }
    inorder(root->left);
    cout<<root->data<<" ";
    inorder(root->right);
}
int main()
{
    cout<<"Enter the root node: "<<endl;
    Node *root;
    root=BinaryTree();
    Preorder(root);
    cout<<endl;
    postorder(root);
    cout<<endl;
    inorder(root);
    return 0;
}