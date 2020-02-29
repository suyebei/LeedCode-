/*************************************************************************
	> File Name: leetcode101.cpp
	> Author: suyebei
	> Mail: suyebei@126.com
	> Created Time: 六  2/29 14:58:28 2020
 ************************************************************************/

/**
 * Definition for a binary tree node.
 * struct TreeNode {
 *     int val;
 *     struct TreeNode *left;
 *     struct TreeNode *right;
 * };
 */


bool isSymmetric(struct TreeNode* root){
    if (root == NULL) return true;
    return issametree(root->left, root->right); 
}

issametree(struct TreeNode *p, struct TreeNode *q) {
    if (p == NULL && q == NULL) return true;
    if (p == NULL || q == NULL) return false;
    if (p->val - q->val) return false;//???
    return issametree(p->left, q->right) && issametree(p->right, q->left);
}
