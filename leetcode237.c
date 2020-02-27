/*************************************************************************
	> File Name: leetcode237.c
	> Author: suyebei
	> Mail: suyebei@126.com
	> Created Time: 四  2/27 13:30:32 2020
 ************************************************************************/

/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     struct ListNode *next;
 * };
 */
void deleteNode(struct ListNode* node) {
    struct ListNode *p = node->next;
    node->val = p->val;
    node->next = p->next;
    free(p);  
}
