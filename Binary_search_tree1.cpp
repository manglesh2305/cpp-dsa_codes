#include<iostream>
using namespace std;
class node{
    public:
    int data;
    node* left, *right;
    node(int val){
        data=val;
        left=NULL;
        right=NULL;
    }
node* insertBST(node* root,int val){
    if(root==NULL){
        return new node(val);
    }
    if(val<root->data){
        root->left=insertBST(root->left,val);
    }
    else{
        root->right=insertBST(root->right,val);
    }
    return root;
}
};
node* searchBST(node* root, int val){
    if(root==NULL) return NULL;
    if(root->data==val) return root;
    else if(root->data>val){
        return searchBST(root->left,val);
    }
    else{
        return searchBST(root->right,val);
    }
}
node* deleteInBST(node* root, int key){
   // if(key)
}