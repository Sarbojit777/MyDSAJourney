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
        ListNode* curr1 = l1;
        ListNode* curr2 = l2;
        int carry = 0 ;

        while(curr1!=NULL || curr2!=NULL){
            int sum = carry ;

            if(curr1!=NULL) sum+= curr1->val;
            if(curr2!=NULL) sum+= curr2->val;

            carry = sum/10;

            if(curr1!=NULL) curr1->val = sum%10;
            else{ //l1 is shorter 
                ListNode* temp = new ListNode(sum%10);

                ListNode* tail = l1;
                while(tail->next!=NULL) tail = tail->next;

                tail->next = temp;
                curr1 = temp;
            }
            if (curr1 != NULL)
                curr1 = curr1->next;

            if (curr2 != NULL)
                curr2 = curr2->next;
        }
        if (carry) {
            ListNode* tail = l1;
            while (tail->next != NULL)
                tail = tail->next;

            tail->next = new ListNode(carry);
        }

        return l1;
    }
};