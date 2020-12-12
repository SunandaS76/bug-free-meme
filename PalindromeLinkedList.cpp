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
    bool isPalindrome(ListNode* head) {
    ListNode *temp,  *prev;
    temp = head;
    prev = NULL;
    while (temp!=NULL){
            ListNode* node=new ListNode;
            node->val=temp->val;
            node->next=prev;
            prev=node;
            temp=temp->next;
        }   ` 
    ListNode *p, *k;
    p = head;
    k = prev;
        bool ans = true;
    while(p != NULL && k != NULL){
        
        if (p->val == k->val){
            p = p->next;
            k = k->next;
        }
        else 
             return false;
    }
    return true;
    }
};