/*************************************************************************
	> File Name: leetcode206.c
	> Author: suyebei
	> Mail: suyebei@126.com
	> Created Time: 四  2/27 13:12:31 2020
 ************************************************************************/

/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     struct ListNode *next;
 * };
 */


struct ListNode* reverseList(struct ListNode* head){
    struct ListNode ret, *p = head, *q;
    ret.next = NULL;
    while (p) {
        q = p->next;
        p->next = ret.next;
        ret.next = p;
        p = q;
    }
    return ret.next;

}
