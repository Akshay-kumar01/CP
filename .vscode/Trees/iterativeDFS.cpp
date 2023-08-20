#include<bits/stdc++.h>
using namespace std;

class node{
    public:

    int data;
    node *left;
    node *right;

    node(int d){
        this->data=d;
        this->left=NULL;
        this->right=NULL;
    }
};

node *buildTree(node *root)
{
    int data;
    cout << "Enter the data" << endl;
    cin >> data;
    root = new node(data);

    if (data == -1)
        return NULL;

    cout << "enter left data of " << data << endl;
    root->left = buildTree(root->left);

    cout << "enter right data of " << data << endl;
    root->right = buildTree(root->right);

    return root;
}

vector<int> postordertraversal(node* root){
    vector<int> postorder;

    if(root==NULL)
        return postorder;

    stack<node* > st;
    st.push(root);
    while(!st.empty())
    {
        if(root!=NULL)
        {
            st.push(root);
            root=root->left;
        }

        else{
            root=st.top();
            st.pop();
            root=root->right;
            postorder.push_back(root->data);

        }
    } 
        return postorder;
}

int main(){
    node* root=NULL;
    buildTree(root);
    vector<int> v= postordertraversal(root);
    for(auto x: v)
        cout<<x<<endl;
}