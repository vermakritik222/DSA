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

void levelOderTraversal(Node *root, vector<int> &LevelOder)
{

    queue<Node *> q;
    q.push(root);
    q.push(NULL);

    while (!q.empty())
    {
        Node *temp = q.front();
        q.pop();
        if (temp != NULL)
        {
            LevelOder.push_back(temp->val);
            if (temp->left != NULL)
            {
                q.push(temp->left);
            }
            if (temp->right != NULL)
            {
                q.push(temp->right);
            }
        }
        else if (!q.empty())
        {
            q.push(NULL);
        }
    }
}
void printVector(vector<int> vec)
{
    for (int i = 0; i < vec.size(); i++)
    {
        cout << vec[i] << " ";
    }
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

    vector<int> LevelOder;
    levelOderTraversal(root, LevelOder);
    printVector(LevelOder);
    return 0;
}