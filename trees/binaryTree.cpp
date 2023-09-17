/*
tree is a non linear data structure in which one node (parent node) may be liked with more than one nodes which is not poosible in data structures like linked list.

tree is hirarchichal data strucutre

in binary tree the parent node is connected only with 2 or less than 2 children nodes

a tree having multiple childs or more than 2 childs is called as n-ary tree
and these childs are stored inside a list like ds(bcz it's not possible to store multiple nodes with variables)



*/

#include <iostream>
#include <queue>
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

// level order traversal of tree(breadth first search)
// use queue to impleent it
void levelOrderTraversal(node *root)
{
    queue<node *> q;
    q.push(root);
    q.push(NULL);
    while (!q.empty())
    {
        node *temp = q.front();
        q.pop();
        if (temp == NULL) // means old level get completed
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

        // 1 3 7 -1 -1 11 -1 -1 5 17 -1 -1 -1
    }
}

// reverse level order traverasal of tree
void revLevelOrder(node *root)
{
}

/*
other traversal orders of tree
1) in-order traversal(LNR)
2) pre-order traversal(NLR)
3) post-order traversal(LRN)

L-> go to left
R-> got to right
N-> pirnt the data
*/

void inorder(node *root)
{
    if (root == NULL)
    {
        return;
    }
    inorder(root->left);
    cout << root->data << " ";
    inorder(root->right);
}
void preorder(node *root)
{
    if (root == NULL)
    {
        return;
    }
    cout << root->data << " ";
    preorder(root->left);
    preorder(root->right);
}
void postorder(node *root)
{
    if (root == NULL)
    {
        return;
    }
    postorder(root->left);
    postorder(root->right);
    cout << root->data << " ";
}

node *buildTree(node *root)
{
    cout << "Enter the data: ";
    int data;
    cin >> data;
    root = new node(data);
    if (data == -1)
    {
        return NULL;
    }
    cout << "Enter a data for inserting in the left of " << data << ": ";
    root->left = buildTree(root->left);
    cout << "Enter a data for inserting in the right of " << data << ": ";
    root->right = buildTree(root->right);
    return root;
}

void buildTreeLevelOrderTraversal(node *&root)
{
    queue<node *> q;
    int data;
    cout << "Enter data for root: ";
    cin >> data;

    root = new node(data);
    q.push(root);

    while (!q.empty())
    {
        node *temp = q.front();
        q.pop();

        cout << "Enter left node for " << temp->data;
        int leftData;
        cin >> leftData;
        if (leftData != -1)
        {
            temp->left = new node(leftData);
            q.push(temp->left);
        }

        cout << "Enter right node for " << temp->data;
        int rightData;
        cin >> rightData;
         if (rightData != -1)
        {
             temp->right = new node(rightData);
            q.push(temp->right);
        }
       
    }
}
int main()
{
    node *root = NULL;
    buildTreeLevelOrderTraversal(root);
    levelOrderTraversal(root);

    // root = buildTree(root);
    // levelOrderTraversal(root);
    // inorder(root);
    // cout << endl;
    // preorder(root);
    // cout << endl;
    // postorder(root);
    // cout << endl;
    // return 0;
}