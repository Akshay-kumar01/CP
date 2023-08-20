#include <bits/stdc++.h>
#include<algorithm>
using namespace std;

class node
{
public:
    int data;
    node *left;
    node *right;

    node(int d)
    {
        this->data = d;
        this->left = NULL;
        this->right = NULL;
    }
};

void buildfromlevelordertraversal(node *&root)
{
    queue<node *> q;
    cout << "Enter the data of root " << endl;
    int data;
    cin >> data;
    root = new node(data);
    q.push(root);

    while (!q.empty())
    {
        node *temp = q.front();
        q.pop();

        cout << "Enter the left data for " << temp->data << endl;
        int leftdata;
        cin >> leftdata;

        if (leftdata != -1)
        {
            temp->left = new node(leftdata);
            q.push(temp->left);
        }

        cout << "Enter the right data for " << temp->data << endl;
        int rightdata;
        cin >> rightdata;

        if (rightdata != -1)
        {
            temp->right = new node(rightdata);
            q.push(temp->right);
        }
    }
}

// int maxnode(node* root,int max)
// {
//     if(root==NULL)
//     return max;

//     if(root->data>max)
//     {
//         max=root->data;
//         return maxnode(root->left,max);    
//         return maxnode(root->right,max);    
//     }

// }

int maxnode(node* root)
{
    if(root==NULL)
    return INT_MIN;

        return max(root->data,max(maxnode(root->left),maxnode(root->right)));    
        // return maxnode(root->right,max);    

}

int main(){
    node* root=NULL;
    buildfromlevelordertraversal(root);
    cout<<maxnode(root)<<endl;
}