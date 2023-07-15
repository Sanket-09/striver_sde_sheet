using namespace std;
#include <bits/stdc++.h>

class TreeNode
{
public:
 int data;
 TreeNode *left, *right;
 TreeNode() : data(0), left(NULL), right(NULL) {}
 TreeNode(int x) : data(x), left(NULL), right(NULL) {}
 TreeNode(int x, TreeNode *left, TreeNode *right) : data(x), left(left), right(right) {}
};

void inorder(TreeNode *root, vector<int> &ans)
{
 if (!root)
  return;
 inorder(root->left, ans);
 ans.push_back(root->data);
 inorder(root->right, ans);
}

vector<int> getInOrderTraversal(TreeNode *root)

{
 vector<int> ans;
 inorder(root, ans);
 return ans;
}
