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
     ListNode* reverseList(ListNode* head) {
        if(head==NULL || head->next==NULL) return head;
        ListNode* prev=NULL;
        
        while(head!=NULL){
            // before breaking the linkage store the right part
            ListNode* ptr=head->next;
            // make head's next point to prev
            head->next=prev;
            // update prev
            prev=head;
            // update head -> move to right part
            head=ptr;
        }
        return prev;
    }
};