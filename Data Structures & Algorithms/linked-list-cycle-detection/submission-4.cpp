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
    bool hasCycle(ListNode* head) {
        ListNode *q=head;
        if(head->next==NULL||head==NULL) return false;
        
        do{
            head=head->next;
            q=q->next;
            q=(q!=NULL)?q->next:NULL;
            
        }while(head!=NULL && q!=NULL && head!=q);
      
      return (head==q)?true:false;  
    }
};
