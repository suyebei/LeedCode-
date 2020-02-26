/*************************************************************************
	> File Name: leetcode160.c
	> Author: suyebei
	> Mail: suyebei@126.com
	> Created Time: 三  2/26 23:33:12 2020
 ************************************************************************/

/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     struct ListNode *next;
 * };
 */
struct ListNode *getIntersectionNode(struct ListNode *headA, struct ListNode *headB) {
    int cntA = 0, cntB = 0;
    struct ListNode *p = headA, *q = headB;
    while (p) cntA++, p = p->next;
    while (q) cntB++, q = q->next;
    p = headA, q = headB;
    int m = cntA - cntB;
    if (m > 0) {
        while (m--) p = p->next;
        while (p != q) {
            p = p->next;
        }
    } else {
        while(m++) q = q->next;
        while (p != q) {
            p = p->next;
            q = q->next;
        } 
    }
    return q;
}
