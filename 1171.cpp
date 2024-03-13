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
    ListNode* removeZeroSumSublists(ListNode* head) {
       if(head==NULL) return head;

       unordered_map<int,ListNode*> preSum;

       ListNode* dummy=new ListNode(0);
       dummy->next=head;
       preSum[0]=dummy;

       int sum=0;
       
       while(head!=NULL){
        
        sum+=head->val;
        
        if(preSum.find(sum)!=preSum.end()){

            ListNode* start=preSum[sum];
            ListNode* temp=start->next;

            int pSum=sum; // will help to find out the node to be deleted present in sequence

            while(temp!=head){
                pSum+=temp->val;
                // delete this guy
                preSum.erase(pSum);
                temp=temp->next;
            }

            // now temp points to head so you just need to make start->next point to head's next
            start->next=head->next;
        }

        else{
            preSum[sum]=head;
        }
        
        head=head->next;
       }

       return dummy->next;
       
    } 
};