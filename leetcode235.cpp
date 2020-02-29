/*************************************************************************
	> File Name: leetcode235.cpp
	> Author: suyebei
	> Mail: suyebei@126.com
	> Created Time: 六  2/29 19:30:21 2020
 ************************************************************************/

/**
 * Definition for a binary tree node.
 * struct TreeNode {
 *     int val;
 *     struct TreeNode *left;
 *     struct TreeNode *right;
 * };
 */
 struct TreeNode *_lowestCommmonAncestr(struct TreeNode *root, struct TreeNode *p, struct TreeNode *q) {
     if (root->val == p->val) return p;
     if (root->val == q->val) return q;
     if (root->val < q->val && root->val > p->val) return root;
     if (p->val > root->val) return _lowestCommmonAncestr(root->right, p, q);
     return _lowestCommmonAncestr(root->left, p, q);
 }
struct TreeNode* lowestCommonAncestor(struct TreeNode* root, struct TreeNode* p, struct TreeNode* q) {
    if (root == NULL) return NULL;
    if (p->val > q->val) {
        struct TreeNode *temp = p;
        p = q;
        q = temp;
    }
    return _lowestCommmonAncestr(root, p, q);
}
