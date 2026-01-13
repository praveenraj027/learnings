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

Info helper(Node *root)
{
    if (root == NULL)
        return Info(1000009, -1000009, 0);
    Info left = helper(root->left);
    Info right = helper(root->right);

    if (root->data > left.max && root->data < right.min)
    {
        int currMin = min(root->data, left.min);
        int currMax = max(root->data, right.max);
        int currSize = left.sz + right.sz + 1;

        return Info(currMin, currMax, currSize);
    }

    return Info(-1000009, 1000009, max(left.sz, right.sz));
}

int largestBSTinBT(Node *root)
{
    Info info = helper(root);
    return info.sz;
}

int main()
{
    Node *root = new Node(10);
    root->left = new Node(5);
    root->right = new Node(15);
    root->left->left = new Node(1);
    root->left->right = new Node(8);
    root->right->right = new Node(7);

    cout << largestBSTinBT(root) << endl;
    return 0;
}
