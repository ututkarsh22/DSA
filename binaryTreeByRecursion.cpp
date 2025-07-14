#include<bits/stdc++.h>
using namespace std;

class Node{
public:
int val;
Node* left, *right;
Node(int x){
    val=x;
    left=right=NULL;
}
};

Node* BinaryTree(){

    int x;
    cin>>x;
    if(x==-1)
    return NULL;

    Node* temp = new Node(x);
    cout<<"Enter the left child of "<<x<<" : ";
    temp->left = BinaryTree();
    cout<<"Enter the right child of "<<x<<" : ";
    temp->right = BinaryTree();
    return temp;
}
int main()
{
    cout<<"Enter the root Node: ";
    Node* root = BinaryTree();

    vector<int>ans;
    stack<Node*>st;
    st.push(root);
    while(!st.empty())
    {
    Node* mark = st.top();
    st.pop();
    if(mark->right != NULL)st.push(mark->right);
    if(mark->left != NULL)st.push(mark->left);
    ans.push_back(mark->val);
    }

    for(auto i: ans)
    {
        cout<< i<<" "; 
    }

}