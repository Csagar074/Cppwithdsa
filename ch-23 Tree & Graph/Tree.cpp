#include <iostream>
using namespace std;

class TreeNode
{
public:
    int data;
    TreeNode *left;
    TreeNode *right;

    TreeNode(int data)
    {
        this->data = data;
        this->left = NULL;
        this->right = NULL;
    }

    void preOrder(TreeNode *root)
    {
        if (root == NULL)
            return;

        cout << root->data << " ";
        preOrder(root->left);
        preOrder(root->right);
    }

    
    void inOrder(TreeNode *root)
    {
        if (root == NULL)
            return;

        inOrder(root->left);
        cout << root->data << " ";
        inOrder(root->right);
    }

    void postOrder(TreeNode *root)
    {
        if (root == NULL)
            return;

        postOrder(root->left);
        postOrder(root->right);
        cout << root->data << " ";
    }
};

int main()
{
    TreeNode *root = new TreeNode(1);

    root->left = new TreeNode(2);
    root->right = new TreeNode(3);

    root->left->left = new TreeNode(4);
    root->left->right = new TreeNode(5);

    root->right->right = new TreeNode(6);

    cout << endl;
    cout << "Pre_Order Traversal: ";
    root->preOrder(root);

    cout << endl;
    cout << "In_Order Traversal: ";
    root->inOrder(root);
    
    cout << endl;
    cout << "Post_Order Traversal: ";
    root->postOrder(root);
}