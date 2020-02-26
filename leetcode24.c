/*************************************************************************
	> File Name: leetcode24.c
	> Author: suyebei
	> Mail: suyebei@126.com
	> Created Time: 三  2/26 17:21:18 2020
 ************************************************************************/

/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     struct ListNode *next;
 * };
 */


struct ListNode* swapPairs(struct ListNode* head){
    struct ListNode ret, *p, *q;
    ret.next = head;
    p = &ret;
    q = head;
    while (q && q->next) {
        p->next = q->next;
        q->next = p->next->next;
        p->next->next = q;
        p = q;
        q = q->next;
    }
    return ret.next;

}
