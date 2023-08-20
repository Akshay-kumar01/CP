#include<bits/stdc++.h>
#include<queue>

using namespace std;

class node{
    public:
    int data;
    node *left;
    node *right;

    node(int d)
    {
        this-> data =d;
        this-> right = NULL;
        this-> left = NULL;
    }


};
    node* buildTree(node* root)
    {
        int data;
        cout<<"Enter the data"<<endl;
        cin>>data;
        root=new node(data);

        if(data==-1)
        return NULL;

        cout<<"enter left data of "<<data<<endl;
        root->left=buildTree(root->left);

        cout<<"enter right data of "<<data<<endl;
        root->right=buildTree(root->right);

        return root;
    }

void levelordertraversal(node* root)
{
    queue<node*> q;
    q.push(root);
    q.push(NULL);       //For knowing that in level 0, there is only one node that is root.

    while(!q.empty()){
        node* temp=q.front();
        q.pop();

        if(temp==NULL)
        {
            cout<<endl;
            if(!q.empty())
            {
                q.push(NULL);
            }
        }
        else
        {
            cout<<temp->data<<" ";
            if(temp->left){
                q.push(temp->left);
            }

            if(temp->right)
            {
                q.push(temp->right);
            }
        }
    }
}

void treeheight(node *root, int &c)
{
    queue<node *> q;
    q.push(root);
    q.push(NULL); // For knowing that in level 0, there is only one node that is root.

    while (!q.empty())
    {
        node *temp = q.front();
        q.pop();

        if (temp == NULL)
        {
            c++;
            if (!q.empty())
            {
                q.push(NULL);
            }
        }
        else
        {
            //cout << temp->data << " ";
            if (temp->left)
            {
                q.push(temp->left);
            }

            if (temp->right)
            {
                q.push(temp->right);
            }
        }
    }
}

    void inordertraversal(node* root)
    {
        //base cas
        if(root==NULL)
        return;

        inordertraversal(root->left);
        cout<<root->data<<" ";
        inordertraversal(root->right);
    }

    void preordertraversal(node *root)
    {
        // base cas
        if (root == NULL)
            return;

        cout << root->data << " ";
        preordertraversal(root->left);
        preordertraversal(root->right);
    }

    void postordertraversal(node *root)
    {
        // base cas
        if (root == NULL)
            return;

        postordertraversal(root->left);
        postordertraversal(root->right);
        cout << root->data << " ";
    }

    void buildfromlevelordertraversal(node* &root)
    {
        queue<node*> q;
        cout<<"Enter the data of root "<<endl;
        int data;
        cin>>data;
        root = new node(data);
        q.push(root);

        while(!q.empty()){
            node* temp=q.front();
            q.pop();

            cout<<"Enter the left data for "<<temp->data<<endl;
            int leftdata;
            cin>>leftdata;

            if(leftdata!=-1){
                temp->left=new node(leftdata);
            q.push(temp->left);
            }
        
            cout<<"Enter the right data for "<<temp->data<<endl;
            int rightdata;
            cin>>rightdata;

            if(rightdata!=-1){
                temp->right=new node(rightdata);
            q.push(temp->right);}

        }
    }
    int main(){
        node* root=NULL;

        // //creating tree
        // root=buildTree(root);
        // // cout<<root->left<<" "<<root->data<<" "<<root->right;

        // inordertraversal(root);
        // cout<<endl;
        // preordertraversal(root);
        // cout<<endl;
        // postordertraversal(root);

        buildfromlevelordertraversal(root);
        int count=0;
        treeheight(root, count);
        levelordertraversal(root);
        cout<<count<<endl;
        return 0;
    }