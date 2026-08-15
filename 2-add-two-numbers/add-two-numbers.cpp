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
    ListNode* addTwoNumbers(ListNode* l1, ListNode* l2) {
          ListNode *temp, *head, *current;
        ListNode *c1, *c2;
        head = NULL;
        int carry,count1,count2,sum,dig,i,j;
        c1 = l1;
        c2 = l2;
        carry = 0;
        sum = 0;

        while(c1 != NULL || c2 != NULL)
        {
            if(c1 != NULL && c2 != NULL)
            {
                sum = carry + c1->val + c2->val;
                c1 = c1->next;
                c2 = c2->next;
            }

            else if(c1 != NULL)
            {
                sum = carry + c1->val;
                c1 = c1->next;
            }

            else
            {
                sum = carry + c2->val;
                c2 = c2->next;
            }

            dig = sum%10;
            carry = sum/10;

            temp = new struct ListNode;
            if(head == NULL)
            {
                head = temp;
                temp->val = dig;
                current = temp;
            }
            else
            {
                current->next = temp;
                temp->val = dig;
                current = temp;
            }
            sum = 0;
        }
        if(carry != 0)
        {
            temp = new struct ListNode;
            current->next = temp;
            temp->val = carry;
            temp->next = NULL;;
        }
        return head;
    }
};