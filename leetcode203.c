/*************************************************************************
	> File Name: leetcode203.c
	> Author: suyebei
	> Mail: suyebei@126.com
	> Created Time: 四  2/27 12:56:45 2020
 ************************************************************************/

/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     struct ListNode *next;
 * };
 */


struct ListNode* removeElements(struct ListNode* head, int val){
    struct ListNode ret, *p = &ret, *q;
    ret.next = head;
    while (p && p->next) {
        if (p->next->val == val) {
            q = p->next;
            p->next = p->next->next;
            free(q);   
        } else {
            p = p->next;
        }
    }
    return ret.next;
}
