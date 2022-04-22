#include <bits/stdc++.h>

using namespace std;

void reader()
{

#ifndef ONLINE_JUDGE
    freopen("input.txt", "r", stdin);
    freopen("output.txt", "w", stdout);
#endif
}

struct Node
{
    int val;
    struct Node *left;
    struct Node *right;
    Node(int key)
    {
        val = key;
        left = NULL;
        right = NULL;
    }
};

void sumReplace(Node *root)
{
    if (root == NULL)
    {
        return;
    }
    sumReplace(root->left);
    sumReplace(root->right);

    if (root->left != NULL)
    {
        root->val += root->left->val;
    }

    if (root->right != NULL)
    {
        root->val += root->right->val;
    }
}

void PrintInoder(Node *root)
{
    if (root == NULL)
    {
        return;
    }

    cout << root->val << " ";
    PrintInoder(root->left);
    PrintInoder(root->right);
}

/*
         1
        / \
       2   3
      / \  / \
     4   5 6  7
   */

int main()
{
    reader();
    Node *root = new Node(1);
    root->left = new Node(2);
    root->right = new Node(3);
    root->left->left = new Node(4);
    root->left->right = new Node(5);
    root->right->left = new Node(6);
    root->right->right = new Node(7);

    PrintInoder(root);
    cout << "\n";
    sumReplace(root);
    PrintInoder(root);
    return 0;
}