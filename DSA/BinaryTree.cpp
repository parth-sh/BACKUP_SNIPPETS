#include "bits-stdc++.h"
using namespace std;

struct Node
{
    struct Node *left, *right;
    int data;
    Node(int val)
    {
        data = val;
        left = NULL;
        right = NULL;
    }
};

class BinaryTree
{
    // There are 2 type of traversal techniques BFS/DFS
    // Types of DFS techniques: InOrder Traversal, PreOrder Traversal, PostOrder Traversal
    // Types of BFS: Level Order Traversal

public:
    void preorder(Node *root) // TC: O(N), SC: O(logN)
    {
        if (root == NULL)
        {
            return;
        }
        cout << root->data << " ";
        preorder(root->left);
        preorder(root->right);
    }

    void inorder(Node *root) // TC: O(N), SC: O(logN)
    {
        if (root == NULL)
        {
            return;
        }
        inorder(root->left);
        cout << root->data << " ";
        inorder(root->right);
    }

    void postorder(Node *root) // TC: O(N), SC: O(logN)
    {
        if (root == NULL)
        {
            return;
        }
        postorder(root->left);
        postorder(root->right);
        cout << root->data << " ";
    }

    void levelorder(Node *root)
    {
        if (root == NULL)
        {
            return;
        }
        queue<Node *> q;
        q.push(root);
        while (!q.empty())
        {
            int n = q.size();
            for (int i = 0; i < n; i++)
            {
                Node *temp = q.front();
                q.pop();
                cout << temp->data << " ";
                if (temp->left)
                {
                    q.push(temp->left);
                }
                if (temp->right)
                {
                    q.push(temp->right);
                }
            }
        }
    }

    // Level Order to Binary Tree
    Node *insertLevelOrder(vector<int> &arr, int i, int n) // TC: O(N), SC: O(n) + O(logN)
    {
        if (i < n)
        {
            Node *root = new Node(arr[i]);

            root->left = insertLevelOrder(arr, 2 * i + 1, n);
            root->right = insertLevelOrder(arr, 2 * i + 2, n);
            return root;
        }
        return NULL;
    }

    // All order traversal Preorder, Inorder, Postorder
    void allordertraversal(Node *root)
    {
        stack<pair<Node *, int>> st;
        vector<vector<int>> ans(3);
        if (root == NULL)
        {
            return;
        }
        st.push({root, 1});
        while (!st.empty())
        {
            pair<Node *, int> it = st.top();
            Node *temp = it.first;
            int touches = it.second;
            st.pop();

            if (touches == 1)
            {
                ans[0].push_back(temp->data);
                touches++;
                st.push({temp, touches});
                if (temp->left)
                {
                    st.push({temp->left, 1});
                }
            }
            else if (touches == 2)
            {
                ans[1].push_back(temp->data);
                touches++;
                st.push({temp, touches});
                if (temp->right)
                {
                    st.push({temp->right, 1});
                }
            }
            else
            {
                ans[2].push_back(temp->data);
            }
        }
        for (auto x : ans)
        {
            for (auto i : x)
            {
                cout << i << " - ";
            }
            cout << endl;
        }
    }
};

int main()
{
    Node *root = new Node(1);
    root->left = new Node(2);
    root->right = new Node(3);
    root->left->right = new Node(5);

    BinaryTree bt;
    // bt.preorder(root);
    // cout << endl;
    // bt.inorder(root);
    // cout << endl;
    // bt.postorder(root);
    // cout << endl;
    // bt.levelorder(root);
    // cout << endl;

    // vector<int> nums = {1, 2, 3, 4, 5};
    // Node *root2 = bt.insertLevelOrder(nums, 0, nums.size());
    // bt.levelorder(root2);
    // cout << endl;

    bt.allordertraversal(root);

    return 0;
}