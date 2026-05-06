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
    
    bool check(ListNode* &l, ListNode* r) {
        if (!r) return true;
        
        bool ispa = check(l, r->next);
        if (!ispa) return false;
        

        bool match = (l->val == r->val);
        l = l->next;
        return match;
    }
    


    bool isPalindrome(ListNode* head) {
        return check(head,head);
    }
};