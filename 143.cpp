#include<bits/stdc++.h>

using namespace std;
class Solution {
public:
    ListNode* findMiddle(ListNode* head){

        if(head->next==NULL) return head;

        ListNode* slow=head;
        ListNode* fast=head;
        /* fast!=NULL take cares of even length LL and fast->next!=NULL take cares of odd length LL*/
        while(fast!=NULL && fast->next!=NULL){
            slow=slow->next;
            fast=fast->next->next;
        }
        return slow;
    }
    ListNode* reverseLL(ListNode* head){
        if(head==NULL ||  head->next==NULL) return head;
        ListNode* prev=NULL;

        while(head!=NULL){
            ListNode* ptr=head->next;
            head->next=prev;
            prev=head;
            head=ptr;
        }
        return prev;
    }
    ListNode* mergeLL(ListNode* ll1,ListNode* ll2){
        ListNode* first=ll1;
        ListNode* second=ll2;

        while(first!=NULL && second!=NULL){
            ListNode* temp1=first->next;
            first->next=second;
            ListNode* temp2=second->next;
            second->next=temp1;
            first=temp1;
            second=temp2;
        }
        
        return ll1;
    }
    void reorderList(ListNode* head) {

        // find middle
        ListNode* middle=findMiddle(head);
        // reverse the right side of middle node
        middle->next=reverseLL(middle->next);
        // divide the linkedlist across middle
        ListNode* ll2=middle->next;
        middle->next=NULL;
        ListNode* ll1=head;
        // merge the left and right part
        mergeLL(ll1,ll2);
    }
};
int main(){
    
    return 0;
}