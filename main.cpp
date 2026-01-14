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

void inorder(Node *root, vector<int> &arr)
{
    if (root == NULL)
        return;

    inorder(root->left, arr);
    arr.push_back(root->data);
    inorder(root->right, arr);
}

Node *buildBSTFromSortedArray(vector<int> arr, int st, int end)
{
    if (st > end)
    {
        return NULL;
    }

    int mid = st + (end - st) / 2;
    Node *root = new Node(arr[mid]);
    root->left = buildBSTFromSortedArray(arr, st, mid - 1);
    root->right = buildBSTFromSortedArray(arr, mid + 1, end);

    return root;
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

class Info
{
public:
    int min, max, sz;

    Info(int minimum, int maximum, int size)
    {
        min = minimum;
        max = maximum;
        sz = size;
    }
};

Node *rightMostInLeftSubTree(Node *root)
{
    Node *ans;
    while (root != NULL)
    {
        ans = root;
        root = root->right;
    }
    return ans;
}
Node *leftMostInRightSubTree(Node *root)
{
    Node *ans;
    while (root != NULL)
    {
        ans = root;
        root = root->left;
    }
    return ans;
}

vector<int> getPredSucc(Node *root, int key)
{
    Node *curr = root;
    Node *pred = NULL;
    Node *succ = NULL;

    while (curr != NULL)
    {
        if (key < curr->data)
        {
            succ = curr;
            curr = curr->left;
        }
        else if (key > curr->data)
        {
            pred = curr;
            curr = curr->right;
        }
        else
        {
            // Inorder pred
            if (curr->left != NULL)
            {
                pred = rightMostInLeftSubTree(curr->left);
            }
            // Inorder succ
            if (curr->right != NULL)
            {
                succ = leftMostInRightSubTree(curr->right);
            }
            break;
        }
    }
    return {pred->data, succ->data};
}

int main()
{
    Node *root = new Node(6);
    root->left = new Node(4);
    root->right = new Node(8);
    root->left->left = new Node(1);
    root->left->right = new Node(5);
    root->right->right = new Node(9);
    root->right->left = new Node(7);
    int key;
    cout << "Enter your key: ";
    cin >> key;
    vector<int> ans = getPredSucc(root, key);
    cout << "Predecessor: " << ans[0] << endl;
    cout << "Successor: " << ans[1] << endl;

    return 0;
}
