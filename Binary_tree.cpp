#include<iostream>
using namespace std;
/* Properties of Binary Tree
1.  Maximium nodes at level L=2**L
2.  Maximum nodes in a binary tree of heihght H =2**H-1
3.  For N nodes minimum possible height or minimum number of levels are [log base 2 (N+1)]
4.  A binary tree with L leaves has at least [{log base 2 (N+1)}+1] number of levels */
class node
{
    public:
    int data;
    node* left;
    node* right;
    node(int value)
    {
        data= value;
        left=NULL;
        right=NULL;
    }
};
void preorder(node* root)
{
    if(root==NULL)
    {
        return ;
    }
    cout<<root->data<<" ";
    preorder(root->left);
    preorder(root->right);
}


void inorder(node* root)
{
    if(root==NULL)
    {
        return ;
    }
    inorder(root->left);
    cout<<root->data<<" ";
    inorder(root->right);
}
void postorder(node* root)
{
    if(root==NULL)
    {
        return ;
    }
    postorder(root->left);
    postorder(root->right);
    cout<<root->data<<" ";
}
int main()
{
    node* root= new node(1);
    root->left=new node(2);
    root->right=new node(3);

    root->left->left=new node(4);
    root->left->right=new node(5);

    root->right->left=new node(6);
    root->right->right=new node(7);

    preorder(root);
    cout<<endl;
    inorder(root);
    cout<<endl;
    postorder(root);
    return 0;
}
