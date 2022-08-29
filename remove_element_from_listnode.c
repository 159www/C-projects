/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     struct ListNode *next;
 * };
 */


struct ListNode* removeElements(struct ListNode* head, int val)
{ 
   struct ListNode *new_head=NULL;
   struct ListNode *temp;
   struct ListNode *front;
   if(head==NULL)
   {
       return head;
   }
   else
   {
   while(head)//遍历链表
   {
     if(head->val!=val)//将符合要求的元素插入新链表
     {  
         temp=malloc(sizeof(struct ListNode ));
         temp->val=head->val;
         temp->next=NULL;
         if(new_head==NULL)
         {
             new_head=temp;
         }
        else
        { 
            //尾插
            front=new_head;
            while(front->next)
            {
                front=front->next;
            }
            front->next=temp;
        }        
        
         

         
     }
     head=head->next;
   }
   }
   return new_head;
   

}
