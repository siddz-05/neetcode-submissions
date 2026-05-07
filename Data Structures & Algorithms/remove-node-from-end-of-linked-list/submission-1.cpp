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
        if(!head) return head;
        if(!head->next) return NULL;
        ListNode *p,*q;
        p=head;
        q=NULL;
        int c=0;

        while(p!=NULL){
            c++;
            p=p->next;
        }
        if(c==n){
            head=head->next;
            return head;
        }
        p=head;

        while(c!=n){
            q=p;
            p=p->next;
            c--;
        }

        q->next=p->next;

        return head;


    }
};
