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

int hight(Node *root)
{
    if (root == NULL)
    {
        return 0;
    }
    int hl = hight(root->left);
    int hr = hight(root->right);

    return max(hl, hr) + 1;
}

bool isBalanced(Node *root)
{
    if (root == NULL)
    {
        return true;
    }
    if (isBalanced(root->left) == false || isBalanced(root->right) == false)
    {
        return false;
    }

    int lh = hight(root->left);
    int rh = hight(root->right);

    if (abs(lh - rh) <= 1)
    {
        return true;
    }
    else
    {
        return false;
    }
}
bool isBalanced_Optimized(Node *root, int &hight)
{
    if (root == NULL)
    {
        return true;
    }

    int hl = 0, rl = 0;
    if (isBalanced_Optimized(root->left, hl) == false || isBalanced_Optimized(root->right, rl) == false)
    {
        return false;
    }

    hight = max(hl, rl) + 1;

    if (abs(hl - rl) <= 1)
    {
        return true;
    }
    else
    {
        return false;
    }
}
/*
         1
        / \
       2   3
      / \  / \
     4   5 6  7
               \
                8
                 \
                  9
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
    // root->right->right->right = new Node(8);
    // root->right->right->right->right = new Node(9);
    int hight = 0;
    if (isBalanced_Optimized(root, hight) == true)
    {
        cout << "OK";
    }
    else
    {
        cout << "NOT OK";
    }

    return 0;
}