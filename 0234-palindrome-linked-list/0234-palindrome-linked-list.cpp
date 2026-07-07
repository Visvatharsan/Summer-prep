class Solution {
public:
    ListNode* reverse(ListNode* head){
        ListNode* prev = nullptr;
        ListNode* curr = head;

        while(curr != nullptr){
            ListNode* next = curr->next;
            curr->next = prev;
            prev = curr;
            curr = next;
        }

        return prev;
    }

    bool isPalindrome(ListNode* head) {
        ListNode* slow = head;
        ListNode* fast = head;

        while(fast != nullptr && fast->next != nullptr){
            slow = slow->next;
            fast = fast->next->next;
        }

        slow = reverse(slow);

        ListNode* p1 = head;
        ListNode* p2 = slow;

        while(p2 != nullptr){
            if(p1->val != p2->val){
                return false;
            }

            p1 = p1->next;
            p2 = p2->next;
        }

        return true;
    }
};