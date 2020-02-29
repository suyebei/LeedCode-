/*************************************************************************
	> File Name: leetcode104.cpp
	> Author: suyebei
	> Mail: suyebei@126.com
	> Created Time: 六  2/29 16:13:08 2020
 ************************************************************************/

/**
 * Definition for a binary tree node.
 * struct TreeNode {
 *     int val;
 *     struct TreeNode *left;
 *     struct TreeNode *right;
 * };
 */


int maxDepth(struct TreeNode* root){
    if (root == NULL) return 0;
    int a = maxDepth(root->left);
    int b = maxDepth(root->right);
    return (a > b ? a : b) + 1;
    


}
