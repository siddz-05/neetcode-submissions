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
        ListNode *d=new ListNode(0,head);
        ListNode *p,*q;
        p=head;
        q=d;
        while(n>0){
            p=p->next;
            n--;
        }
        while(p!=nullptr){
            q=q->next;
            p=p->next;
        }
        q->next=q->next->next;

        return d->next;

        
        
    }
};
