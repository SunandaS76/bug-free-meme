int getNthFromLast(Node *head, int n)
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
   if (n <= cnt){
       while (i != (cnt - n))
       {
           current = current->next;
           i++;
       }
       return current->data;
   }
   else
        return -1;
}
