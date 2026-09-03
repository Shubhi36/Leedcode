/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     ListNode *next;
 *     ListNode() : val(0), next(nullptr) {}
 *     ListNode(int x) : val(x), next(nullptr) {}
 *     ListNode(int x, ListNode *next) : val(x), next(next) {}
 * };
 */
class Solution {
public:
    ListNode* deleteDuplicates(ListNode* head) {
        ListNode *current, *pre;
        if(head == NULL || head->next == NULL)
        return head;
        current = head->next;
        pre = head;
        while(current != NULL)
        {
            if(pre->val == current->val)
            {
                pre->next = current->next;
                current = current->next;
            }
            else
            {
                pre = pre->next;
                current = current->next;
            }
        }
        return head;
    }
};