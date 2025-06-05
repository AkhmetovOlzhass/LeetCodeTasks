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
    ListNode* deleteMiddle(ListNode* head) {
        ListNode* curr = head;
        int count = 0;
        while(curr!= NULL){
            count++;
            curr = curr -> next;
        }

        if(count == 1){
            return NULL;
        }

        int pos = count /2;


        int posCounter = 0;

        curr = head;

        ListNode* temp = curr;

        while(curr != NULL){
            if(posCounter == pos-1 && curr->next != nullptr){
                curr -> next = curr -> next-> next;
            }
            posCounter++;
            curr = curr -> next;
        }



        return temp;
    }
};