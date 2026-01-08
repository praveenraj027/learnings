#include <iostream>
#include <vector>
#include <queue>
#include <map>
using namespace std;

class Node
{
public:
    int data;
    Node *left;
    Node *right;

    Node(int val)
    {
        data = val;
        left = right = NULL;
    }
};

Node *insert(Node *root, int val)
{
    if (root == NULL)
    {
        return new Node(val);
    }

    if (val < root->data)
    {
        root->left = insert(root->left, val);
    }
    if (val > root->data)
    {
        root->right = insert(root->right, val);
    }
    return root;
}

bool search(Node *root, int val)
{
    if (root == NULL)
        return false;
    if (root->data == val)
        return true;
    if (root->data > val)
    {
        return search(root->left, val);
    }
    return search(root->right, val);
}

void inorder(Node *root)
{
    if (root == NULL)
        return;

    inorder(root->left);
    cout << root->data << " ";
    inorder(root->right);
}

Node *buildBST(vector<int> &arr)
{
    Node *root = NULL;

    for (int val : arr)
    {
        root = insert(root, val);
    }
    return root;
}

Node *getInorderSuccessor(Node *root)
{
    while (root != NULL && root->left != NULL)
    {
        root = root->left;
    }
    return root;
}

Node *delNode(Node *root, int key)
{
    if (root == NULL)
        return root;
    if (key < root->data)
    {
        root->left = delNode(root->left, key);
    }
    else if (key > root->data)
    {
        root->right = delNode(root->right, key);
    }
    else
    {
        if (root->left == NULL)
        {
            Node *temp = root->right;
            delete root;
            return temp;
        }
        else if (root->right == NULL)
        {
            Node *temp = root->left;
            delete root;
            return temp;
        }
        else
        {
            Node *IS = getInorderSuccessor(root->right);
            root->data = IS->data;
            root->right = delNode(root->right, IS->data);
        }
    }
    return root;
}

int main()
{
    vector<int> arr = {3, 2, 1, 5, 6, 4};
    Node *root = buildBST(arr);
    inorder(root);
    cout << endl;
    delNode(root, 1);
    inorder(root);
    return 0;
}
