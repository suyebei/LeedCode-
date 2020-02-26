/*************************************************************************
	> File Name: leetcode83.c
	> Author: suyebei
	> Mail: suyebei@126.com
	> Created Time: 三  2/26 18:02:11 2020
 ************************************************************************/

/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     struct ListNode *next;
 * };
 */


struct ListNode* deleteDuplicates(struct ListNode* head){
    struct ListNode *p = head, *q;
    while (p && p->next) {
        if (p->val - p->next->val) {
            p = p->next;   
        } else {
        q = p->next;
        p->next = q->next;
        free(q);
        }
    } 
    return head;
}
