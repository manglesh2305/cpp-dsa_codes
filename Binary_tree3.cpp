#include<iostream>
using namespace std;
class node
{
    public:
    int data;
    node* left;
    node* right;
    node(int value)
    {
        data=value;
        left=NULL;
        right=NULL;
    }
};
void sum_replacement(node* root)
{
    if(root==NULL)
    {
        return ;
    }
    sum_replacement(root->left);
    sum_replacement(root->right);
    if(root->left!=NULL)
    {
        root->data+=root->left->data;
    }
    if(root->right!=NULL)
    {
        root->data+=root->right->data;
    }
}
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
int height(node* root)
{
    if(root==NULL)
    {
        return 0;
    }
    int lheight=height(root->left);
    int rheight=height(root->right);
    return max(lheight,rheight)+1;
}
int diameter(node* root){
        if(root==NULL)
    {
        return 0;
    }
    int lheight=height(root->left);
     int rheight=height(root->right);
     int currdiameter=lheight + rheight +1;

     int ldiameter=diameter(root->left);
     int rdiameter=diameter(root->right);
     return max(currdiameter,max(ldiameter,rdiameter));
}
int diameter(node* root, int* height){
        if(root==NULL)
    {
        *height=0;
        return 0;
    }
     int lh=0, rh=0;
     int ldiameter=diameter(root->left, &lh);
     int rdiameter=diameter(root->right,&rh);
     int currdiameter=lh+rh+1;
     *height= max(lh,rh)+1;
     return max(currdiameter,max(ldiameter,rdiameter));

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
    sum_replacement(root);
    preorder(root);
    cout<<endl<<height(root)<<endl;
    return 0;
}