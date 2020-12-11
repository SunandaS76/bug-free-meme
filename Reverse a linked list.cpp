struct Node* reverseList(struct Node *head)
{
    // code here
    // return head of reversed list
    Node *temp, *current, *prev;
    temp = NULL;
    current = head;
    prev = NULL;
    while(current != NULL){
        temp = current->next;
        current->next = prev;
        prev = current;
        current = temp;
        //current = current->next;
    }
   return prev;
    }
