/*************************************************************************
	> File Name: leetcode100.cpp
	> Author: suyebei
	> Mail: suyebei@126.com
	> Created Time: 六  2/29 14:34:46 2020
 ************************************************************************/

/**
 * Definition for a binary tree node.
 * struct TreeNode {
 *     int val;
 *     struct TreeNode *left;
 *     struct TreeNode *right;
 * };
 */


bool isSameTree(struct TreeNode* p, struct TreeNode* q){
    if (p == NULL && q == NULL) return true;
    if (p == NULL || q == NULL) return false;
    if (p->val - q->val != 0) return false;
    return isSameTree(p->left, q->left) &&isSameTree(p->right, q->right);

}
