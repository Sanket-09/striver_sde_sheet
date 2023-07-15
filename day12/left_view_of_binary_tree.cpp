#include <bits/stdc++.h>
using namespace std;

template <typename T>
class TreeNode
{
public:
 T data;
 TreeNode<T> *left;
 TreeNode<T> *right;

 TreeNode(T data)
 {
  this->data = data;
  left = NULL;
  right = NULL;
 }
};

void left(TreeNode<int> *root, vector<int> &ans, int lvl)
{

 if (root == NULL)
 {
  return;
 }

 if (lvl == ans.size())
 {
  ans.push_back(root->data);
 }

 left(root->left, ans, lvl + 1);
 left(root->right, ans, lvl + 1);
}

vector<int> getLeftView(TreeNode<int> *root)

{
 vector<int> ans;
 int lvl = 0;
 left(root, ans, lvl);
 return ans;
}