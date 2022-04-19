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

void inoderPrint(struct Node *root)
{

    if (root == NULL)
    {
        return;
    }
    inoderPrint(root->left);
    cout << root->val << " ";
    inoderPrint(root->right);
}

void inoder(struct Node *root, vector<int> &ans)
{
    if (root == NULL)
    {
        return;
    }
    inoder(root->left, ans);
    ans.push_back(root->val);
    inoder(root->right, ans);
}

void preoder(struct Node *root, vector<int> &ans)
{
    if (root == NULL)
    {
        return;
    }
    ans.push_back(root->val);
    preoder(root->left, ans);
    preoder(root->right, ans);
}

int search(vector<int> inoder, int st, int ed, int curr)
{
    for (int i = st; i <= ed; i++)
    {
        if (inoder[i] == curr)
        {
            return i;
        }
    }
    return -1;
}

Node *buildTree(vector<int> preoder, vector<int> inoder, int st, int ed)
{
    static int idx = 0;
    if (st > ed)
    {
        return NULL;
    }

    int curr = preoder[idx];
    idx++;
    Node *node = new Node(curr);

    if (st == ed)
    {
        return node;
    }

    int pos = search(inoder, st, ed, curr);
    node->left = buildTree(preoder, inoder, st, pos - 1);
    node->right = buildTree(preoder, inoder, pos + 1, ed);
    return node;
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
    inoderPrint(root);
    cout << "\n";
    vector<int> Preoder;
    vector<int> Inoder;
    preoder(root, Preoder);
    inoder(root, Inoder);

    Node *tree = buildTree(Preoder, Inoder, 0, (Preoder.size() - 1));

    inoderPrint(tree);

    return 0;
}