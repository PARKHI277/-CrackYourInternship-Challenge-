#include<iostream>
#include<vector>
#include<bits/stdc++.h>
using namespace std;

struct TreeNode {
     int val;
     TreeNode *left;
      TreeNode *right;
      TreeNode() : val(0), left(nullptr), right(nullptr) {}
      TreeNode(int x) : val(x), left(nullptr), right(nullptr) {}
     TreeNode(int x, TreeNode *left, TreeNode *right) : val(x), left(left), right(right) {}
  };

  void preorder(TreeNode* root)
{
    if (root == nullptr) {
        return;
    }
 
    cout << root->val << " ";
    preorder(root->left);
    preorder(root->right);
}
TreeNode* invertTree(TreeNode* root) 
    {
        if (root == NULL)
        {
        return root;
         }
 
   
     swap(root->left, root->right);
     root->left = invertTree(root->left);
     root->right = invertTree(root->right);
        
        
        return root;
        
    
    }
int main()
{
    
 
    TreeNode* root = new TreeNode(1);
        
    root->left = new TreeNode(2);
    root->right = new TreeNode(3);
    root->left->right = new TreeNode(4);
    root->right->left = new TreeNode(5);
    root->right->right = new TreeNode(6);
    root->right->left->left = new TreeNode(7);
   
 
   invertTree(root);
    preorder(root);
 
    return 0;
}