/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     ListNode *next;
 *     ListNode(int x) : val(x), next(NULL) {}
 * };
 */
class Solution {
public:
    ListNode *getIntersectionNode(ListNode *headA, ListNode *headB) {
        ListNode *current, *c1, *c2;
        int count1,count2,count;
        count1 = 0;
        count2 = 0;
        c1 = headA;
        c2 = headB;
        while(c1 != NULL || c2 != NULL)
        {
            if(c1 != NULL)
            {
                count1++;
                c1 = c1->next;
            }
            if(c2 != NULL)
            {
                count2++;
                c2 = c2->next;
            }
        }
        if(count1>count2)
        {
            count = count1-count2;
            c1 = headA;
            c2 = headB;
        }
        else
        {
            count = count2-count1;
            c1 = headB;
            c2 = headA;
        }
        while(count > 0)
        {
            c1 = c1->next;
            count--;
        }
        while(c1 != NULL && c2 != NULL)
        {
            if(c1 == c2)
            return c1;
            c1 = c1->next;
            c2 = c2->next;
        }
        return NULL;
    }
};