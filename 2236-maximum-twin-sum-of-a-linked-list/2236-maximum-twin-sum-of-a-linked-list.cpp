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
    int pairSum(ListNode* head) {
        int pos = 0;

        ListNode* slow = head;
        ListNode* fast = head;
        while(fast && fast->next){
            slow = slow -> next;
            fast = fast -> next -> next;
        }

        ListNode* prev = NULL;

        while(slow){
            ListNode* next = slow-> next;
            slow -> next = prev;

            prev = slow;
            slow = next;
        }

        int maxSum = 0;

        ListNode* first = head;
        ListNode* second = prev;

        while(second){
            int sum = first -> val + second -> val;
            maxSum = max(maxSum, sum);
            first = first-> next;
            second = second -> next;

        }

        return maxSum;



        return pos;
    }
};