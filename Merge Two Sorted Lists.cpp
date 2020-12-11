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
    ListNode* mergeTwoLists(ListNode* l1, ListNode* l2) {
        ListNode *start = NULL;
        ListNode *ptr = NULL;
        while(l1 != NULL && l2 != NULL){
            if(l1->val < l2->val){
                if(start == NULL && ptr == NULL){
                    start = l1;
                    ptr = l1;
                }
                else {
                    ptr->next = l1;
                    ptr = l1;
                }
                l1 = l1->next;
            }
            else {
                if(start == NULL && ptr == NULL){
                    start = l2;
                    ptr = l2;
                }
                else {
                    ptr->next = l2;
                    ptr = l2;
                }
                l2 = l2->next;
            }
        }
        if (l1==NULL && l2==NULL){
            return start;
        }
        else if(l1==NULL){
            if (start==NULL){
                start=l2;
                ptr=l2;
            }
            else{
            ptr->next=l2;
            }
        }
        else if(l2==NULL){
            if (start==NULL){
                start=l1;
                ptr=l1;
            }
            else{
                ptr->next=l1;    
            }
        }
        return start;
    }
};