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

   int height(TreeNode*root ,int& diameter)
    {
        if(root == NULL)
        {
            return 0 ;
        }
        
        int lh = height(root->left , diameter);
        int rh = height(root->right , diameter);
        diameter = max(diameter,lh+rh);
        
        return 1 + max(lh,rh);
        
    }
    
    int diameterOfBinaryTree(TreeNode* root) 
    {
       int diameter = 0;
        height(root,diameter);
        return diameter;
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
    root->right->left->right = new TreeNode(8);
 
    cout << "The diameter of the tree is " << diameterOfBinaryTree(root);
 
    return 0;
    }