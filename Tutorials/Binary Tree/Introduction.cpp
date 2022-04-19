#include <iostream>

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
void preoder(struct Node *root)
{
    if (root == NULL)
    {
        return;
    }
    cout << root->val << " ";
    preoder(root->left);
    preoder(root->right);
}

void inoder(struct Node *root)
{

    if (root == NULL)
    {
        return;
    }
    inoder(root->left);
    cout << root->val << " ";
    inoder(root->right);
}

void postoder(struct Node *root)
{
    if (root == NULL)
    {
        return;
    }
    postoder(root->left);
    postoder(root->right);
    cout << root->val << " ";
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
    root->right = new Node(2);
    root->left->left = new Node(4);
    root->left->right = new Node(5);
    root->right->left = new Node(6);
    root->right->right = new Node(7);
    // preoder(root);
    // inoder(root);
    postoder(root);

    return 0;
}