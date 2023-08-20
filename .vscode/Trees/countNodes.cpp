#include<bits/stdc++.h>
using namespace std;

class node{
    public:
    int data;
    node* left;
    node* right;

    node(int d)
    {
        this->data=d;
        this->left=NULL;
        this->right=NULL;
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

    int countnodes(node* root, int &c)
    {
        if(root==NULL)
        return 0;

        return 1 + countnodes(root->right, c) + countnodes(root->left, c);
    }

int main()
{
    node* root=NULL;
    buildfromlevelordertraversal(root);
    int c=0;
    cout << countnodes(root, c) << endl;
    return 0;
}