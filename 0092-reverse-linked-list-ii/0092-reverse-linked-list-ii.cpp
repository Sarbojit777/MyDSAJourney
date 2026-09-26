class Solution {
public:
    ListNode* reverseBetween(ListNode* head, int left, int right) {
        if (head == NULL || left == right)
            return head;

        ListNode* curr = head;
        ListNode* prev = NULL;

        // Move curr to the left position
        for (int i = 1; i < left; i++) {
            prev = curr;
            curr = curr->next;
        }

        ListNode* before = prev;
        ListNode* leftNode = curr;

        // Reverse from left to right
        prev = NULL;

        for (int i = left; i <= right; i++) {
            ListNode* temp = curr->next;
            curr->next = prev;
            prev = curr;
            curr = temp;
        }

        // prev = right node
        // curr = node after right

        if (before != NULL)
            before->next = prev;
        else
            head = prev;

        leftNode->next = curr;

        return head;
    }
};