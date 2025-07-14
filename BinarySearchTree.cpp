#include<bits/stdc++.h>
using namespace std;

class Node{

    public:
    int data;
    Node* left,*right;

    Node(int val)
    {
        data = val;
        left = right = NULL;
    }
};

Node* insert(Node* root , int target)
{
    if(!root)
    {
        Node* temp = new Node(target);
        return temp;
    }

    if(target < root->data)
    root->left = insert(root->left, target);
    else 
    root->right = insert(root->right, target);

    return root;
}

void inorder( Node* root)
{
    if(!root)
    return ;

    inorder(root->left);
    cout<<root->data<<" ";
    inorder(root->right);
}

bool search(Node* root , int value)
{
    if(!root)
    return 0;

    if(root->data == value)
    return 1;
    else if(root->data < value)
    return search(root->right, value);
    else
    return search(root->left, value);

}
int main()
{

    int n;
    cin>>n;
    int arr[n];
    for(int i=0; i<n; i++)
    cin>>arr[i];
    
    Node* root = NULL;
    
    for(int i=0; i<n; i++)
    root = insert(root,arr[i]);

    inorder(root);
    cout<<endl;
    if(search(root,29))
    cout<<"its in tree";
    else
    cout<<"its not in tree";
}