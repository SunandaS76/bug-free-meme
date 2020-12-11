//Finding middle element in a linked list
int getMiddle(Node *head)
{
   // Your code here
   int cnt=0;
   Node* current = head;
   while(current != NULL)
   {
       cnt++;
       current = current->next;
   }
   int i = 0;
   current = head;
   while (i != cnt/2)
   {
       current = current->next;
       i++;
   }
   return current->data;
}