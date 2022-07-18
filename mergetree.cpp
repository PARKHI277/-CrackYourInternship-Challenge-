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


 TreeNode* mergeTrees(TreeNode* root1, TreeNode* root2) 
    {
        if(root1!=NULL && root2!=NULL)
        {
            root1->val=root1->val + root2->val;
            root1->left=mergeTrees(root1->left,root2->left);
            root1->right=mergeTrees(root1->right,root2->right);
        }else
        {
            return root1? root1: root2;
        }
       
        return root1;
    }