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
        ListNode *p;
        p=head;
        int c=0;
        while(p!=NULL){
            c++;
            p=p->next;
        }
        int x=c-n;
        if(x==0) return head->next;
        p=head;
        for(int j=0;j<x-1;j++){
            p=p->next;
        }
        p->next=p->next->next;

        return head;


    }
};
