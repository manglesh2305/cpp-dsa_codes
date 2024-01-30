#include <iostream>
#include <queue>
using namespace std;
class node
{
public:
    int data;
    node *left;
    node *right;
    node(int value)
    {
        data = value;
        left = NULL;
        right = NULL;
    }
};
void level_order(node *root)
{
    if (root == NULL)
    {
        return;
    }
    queue<node *> q;
    q.push(root);
    q.push(NULL);
    while (!q.empty())
    {
        node *n = q.front();
        q.pop();
        if (n != NULL)
        {
            cout << n->data << " ";
            if (n->left)
            {
                q.push(n->left);
            }
            if (n->right)
            {
                q.push(n->right);
            }
        }
        else if (!q.empty())
        {
            q.push(NULL);
        }
    }
}
int sum_at_K(node* root, int K)
{
    if(root==NULL)
    {
        return -1 ;
    }
    int sum=0;
    int level=0;
    queue<node*> q;
    q.push(root);
    q.push(NULL);
    while(!q.empty())
    {
        node* n=q.front();
        q.pop();
        if(n!=NULL)
        {
            if(level==K)
            {
                sum+=n->data;
            }
        if(n->left)
        {
            q.push(n->left);
        }
        if(n->right)
        {
             q.push(n->right);
        }
        }
        else if(!q.empty())
        {
            q.push(NULL);
            level++ ;
        }
    }
    return sum ;
}
int count_nodes(node* root)
{
    if(root==NULL)
    {
        return 0;
    }
    return count_nodes(root->left) + count_nodes(root->right) + 1 ;
}
int sum(node* root)
{
    if(root==NULL)
    {
        return 0;
    }
    return sum(root->left)+sum(root->right)+root->data;
}
int main()
{
    node *root = new node(1);
    root->left = new node(2);
    root->right = new node(3);

    root->left->left = new node(4);
    root->left->right = new node(5);

    root->right->left = new node(6);
    root->right->right = new node(7);

    level_order(root);
    cout<<endl<<sum_at_K(root, 2)<<endl;
    cout<<count_nodes(root)<<endl;
    cout<<sum(root)<<endl;
    return 0;
}