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
    ListNode* removeNthFromEnd(ListNode* head, int n) {
        ListNode* curr = head ;
        int c = 0 ; 
        while(curr!=NULL){
            c++;
            curr=curr->next;
        }
        curr=head;
        if(n==c){
            ListNode* todel = head;
            head=head->next;
            delete todel;
            return head;
        }
        for(int i = 0 ; i < c-n-1 ; i++) curr = curr->next;
        ListNode* todel = curr->next ;
        curr->next = todel->next;
        delete todel ;
        return head ;
    }
};