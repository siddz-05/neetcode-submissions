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
    ListNode* middleNode(ListNode* head) {
       ListNode *p=head;
       int c=0;
       int m=0;
       while(p!=NULL){
        c++;
        p=p->next;
       }
       if(c%2==0) m=c/2;
       else m=c/2+1;

       while(c!=m){
        c--;
        head=head->next;
       }
       return head;
    }
};