#include<iostream>
using namespace std;
class node {
    public:
    int data;
    node *left;
    node *right;

    node(int data)
    {
        this->data = data;
        this->left = NULL;
        this->right = NULL;
    }
};
node *createNode(node *root)
{
    cout<<"Enter the data"<<endl;
    int data;
    cin>>data;
    root = new node(data);
    if(data==-1)
    {
        return NULL;
    }
    cout<<"Enter data for left" <<endl;
    root->left = createNode(root->left);
    cout<<"Enter data for right"<<endl;
    root->right = createNode(root->right);
    return root;
}
void preOrder(node* head)
{
    node* temp = head;
    if (temp==NULL)
    {
        return;
    }
    cout<<temp->data<< " ";
    preOrder(temp->left);
    preOrder(temp->right); 
}
  void mirrorTree(node* root)
    {
        // Resursion
        if (root == NULL)
            return;
        else {
        // temp node
        node* temp;
        mirrorTree(root->left);
        mirrorTree(root->right);

        temp = root->left;
        root->left = root->right;
        root->right = temp;
    }
    }
       node* invertTree(node* root) 
       {
        node* mirror = root;
        mirrorTree(root);
        return mirror;
       }
int main()
{
    cout<<"Tree program:"<<endl;
    node *root = NULL;
    root = createNode(root);
    preOrder(root);

    // node* invertTree(node* root) 
    //     node* mirror = root;
    //     mirrorTree(root);
    //     return mirror;
        // stack<node*> st;
        // st.push(root->left);
        // st.push(root->right);
        // swap(root->left, root->right);
        invertTree(root);
}