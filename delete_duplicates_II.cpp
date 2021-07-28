// Using unordered map

ListNode* deleteDuplicates(ListNode* head) {
        unordered_map <int,int> mp;
        ListNode* p=head, *np, *pp;
        while(p != NULL)
        {
            mp[p->val] = 0;
            p = p->next;
        }
        p = head;
        while(p != NULL)
        {
            mp[p->val]++ ;
            p = p->next;
        }
        np = new ListNode(-101,head);
        pp = np;
        
        p=head;
        
        while(p != NULL)
        {
            if(mp[p->val] > 1){
                // cout<<p->val<<" "<<mp[p->val]<<" ";
                if(p == head)
                {
                    head = p->next;
                    p = p->next;
                    pp = pp->next;
                }
                else 
                {
                    pp->next = p->next;
                    p = p->next;
                }
            }
            else{
                p = p->next;
                pp = pp->next;
            }
        }
        return head;
    }