#include <iostream>
#include <queue>
using namespace std;
class node
{
    // this  line is must:
public:
    // this line is must
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
node *crateNode(node *root)
{
    cout << "Enter the data" << endl;
    int data;
    cin >> data;
    root = new node(data);

    if (data == -1)
    {
        return NULL;
    }
    cout << "Enter data for left" << endl;
    root->left = crateNode(root->left);
    cout << "Enter data for right" << endl;
    root->right = crateNode(root->right);
    return root;
}
void levelOrder(node *root)
{
    queue<node *> q;
    q.push(root);
    q.push(NULL);
    while (!q.empty())
    {
        node *temp = q.front();
        // cout<<temp->data;
        q.pop();
        if (temp == NULL)
        {
            cout << endl;
            if (!q.empty())
            {
                q.push(NULL); 
            }
        }
        else 
        {
            cout << temp->data << " ";
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
void preOrder(node* head){
    node* temp = head;
    if (temp==NULL)
    {
        return;
    }
    cout<<temp->data<<" "; 
    preOrder(temp->left);
    preOrder(temp->right);
}

void InOrder(node* head){
    node* temp = head;
    if (temp==NULL)
    {
        return;
    }
    InOrder(temp->left);
    cout<<temp->data<<" "; 
    InOrder(temp->right);
}

void PostOrder(node* head){
    node* temp = head;
    if (temp==NULL)
    {
        return;
    }
    PostOrder(temp->left);
    PostOrder(temp->right);
    cout<<temp->data<<" "; 
}

void buildFromLevelOrder(node* &root)
{
    queue<node*> q;
    cout<<"Enter the data for the root node: "<<endl;
    int data;
    cin>>data;
    root = new node(data);
    q.push(root);

    while(!q.empty())
    {
        node* temp  = q.front();
        q.pop();

        cout<<"Enter the data for left node: "<<temp->data<<endl;
        int leftData;
        cin>>leftData;

        if (leftData !=-1)
        {
            temp->left = new node(leftData);
            q.push(temp->left);
        }

        cout<<"Enter the data for right node: "<<temp->data<<endl;
        int rightData;
        cin>>rightData;

        if (rightData !=-1)
        {
            temp->right = new node(rightData);
            q.push(temp->right);
        }
    }
}
int main()
{
    cout << "Tree program" << endl;
    node *root = NULL;
    // root = crateNode(root);
    // levelOrder(root);

    buildFromLevelOrder(root);
    levelOrder(root);



    // cout<<"Preorder traversal is: "<<endl;
    // preOrder(root);
    // cout<<"Inorder Traversal is: "<<endl;
    // InOrder(root);
    // cout<<"PostOrder Traversal is: "<<endl;
    // PostOrder(root);
    return 0;
}