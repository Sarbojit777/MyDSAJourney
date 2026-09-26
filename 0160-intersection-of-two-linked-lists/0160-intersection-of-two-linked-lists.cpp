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
    ListNode *getIntersectionNode(ListNode *head1, ListNode *head2) {
        ListNode* cur1 = head1 ;
        ListNode* cur2 = head2 ;
        while(cur1!=cur2){
            cur1 = (cur1==NULL) ? head2 : cur1->next;
            cur2 = (cur2==NULL) ? head1 : cur2->next;
        }
        return cur1;
    }
};