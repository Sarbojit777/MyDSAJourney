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
    bool isPalindrome(ListNode* head) {
        // divide list into two halves 
        ListNode* slow = head;
        ListNode* fast = head;
        while(fast->next!=NULL && fast->next->next!=NULL){
            fast=fast->next->next;
            slow = slow->next;
        }
        ListNode* h2 = slow->next;
        slow->next = NULL;

        ListNode* prev = NULL;
        ListNode* curr = h2;
        while(curr!=NULL){
            ListNode* next = curr->next;
            curr->next = prev ;
            prev = curr ;
            curr = next ;
        }
        h2 = prev;
        ListNode* c1 = head ;
        ListNode* c2 = h2 ;
        while(c1!=NULL && c2!=NULL){
            if(c1->val != c2->val) return false;
            c1=c1->next;
            c2=c2->next;
        }
        return true;
    }
};