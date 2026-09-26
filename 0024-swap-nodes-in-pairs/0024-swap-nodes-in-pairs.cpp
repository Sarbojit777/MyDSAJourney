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
    ListNode* swapPairs(ListNode* head) {
        if(head==NULL || head->next == NULL) return head;

        ListNode* one = head ;
        ListNode* prev = NULL ;
        ListNode* two = head->next ;
        while(one!=NULL && one->next!=NULL){
            one->next = two->next;
            two->next = one;

            if(prev!=NULL) prev->next = two;
            else head = two;

            prev = one;
            one = one->next;
            if(one!=NULL)
            two = one->next;
        }
        return head;
    }
};