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

int calcHight_BT(Node *root)
{
    if (root == NULL)
    {
        return 0;
    }
    int lHight = calcHight_BT(root->left);
    int rHight = calcHight_BT(root->right);

    return max(lHight, rHight) + 1;
}

int numberOFNods(Node *root)
{
    if (root == NULL)
    {
        return 0;
    }

    return numberOFNods(root->left) + numberOFNods(root->right) + 1;
}

int sumOFNods(Node *root)
{
    if (root == NULL)
    {
        return 0;
    }

    return sumOFNods(root->left) + sumOFNods(root->right) + root->val;
}

int calcDiameter_optimized(Node *root, int &height)
{
    int lh = 0, rh = 0;
    int lDiameter = calcDiameter_optimized(root->left, lh);
    int rDiameter = calcDiameter_optimized(root->right, rh);

    int currDiameter = lh + rh + 1;

    height = max(lh, rh) + 1;

    return max(currDiameter, max(lDiameter, rDiameter));
}

int calcDiameter(Node *root)
{
    if (root == NULL)
    {
        return 0;
    }
    int lHeight = calcHight_BT(root->left);
    int rHeight = calcHight_BT(root->right);
    int currDiameter = lHeight + rHeight + 1;

    int lDiameter = calcDiameter(root->left);
    int rDiameter = calcDiameter(root->right);

    return max(currDiameter, max(lDiameter, rDiameter));
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

    cout << calcDiameter(root);
    int hight = 0;
    // cout << calcDiameter_optimized(root, hight);

    return 0;
}