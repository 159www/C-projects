/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     struct ListNode *next;
 * };
 */


struct ListNode* addTwoNumbers(struct ListNode* l1, struct ListNode* l2)
{  
   int temp_sum=0;
   int up=0;//进位值
  struct ListNode *head=NULL;
  struct ListNode *result=NULL;
   while(l1!=NULL||l2!=NULL)
   {
       if(l1!=NULL&&l2!=NULL)
       {
          temp_sum=l1->val+l2->val+up;
          up=0;
          if(temp_sum>=10)
          {
              up=1;
              temp_sum=temp_sum%10;
              
          }
          struct ListNode *p=malloc(sizeof(struct ListNode));
          p->val=temp_sum;
          temp_sum=0;
          p->next=NULL;
          if(head==NULL)
          {
              head=p;
              result=head;
          }
          else
          {
              head->next=p;
              head=head->next;
          }

       }
       else if(l1!=NULL&&l2==NULL)
       {
          struct ListNode *p=malloc(sizeof(struct ListNode));
          temp_sum=l1->val+up;
          up=0;
          if(temp_sum>=10)
          {
              up=1;
              temp_sum=temp_sum%10;

          }
          p->val=temp_sum;
          p->next=NULL;
          if(head==NULL)
          {
              head=p;
              result=head;
          }
          else
          {
              head->next=p;
              head=head->next;
          }

       }
       else if(l1==NULL&&l2!= NULL)
       {
          struct ListNode *p=malloc(sizeof(struct ListNode));
           temp_sum=l2->val+up;
           up=0;
          if(temp_sum>=10)
          {
              up=1;
              temp_sum=temp_sum%10;

          }
          p->val=temp_sum;
          p->next=NULL;
          if(head==NULL)
          {
              head=p;
              result=head;
          }
          else
          {
              head->next=p;
              head=head->next;
          }
       }
       else if(l1==NULL&&l2==NULL)
       {
       

       }
       if(l1)
       l1=l1->next;
       if(l2)
       l2=l2->next;
   }
    if(up>0)
        {
            struct ListNode *p=malloc(sizeof(struct ListNode));
            p->val=up;
            p->next=NULL;
             if(head==NULL)
          {
              head=p;
              result=head;
          }
          else
          {
              head->next=p;
              head=head->next;
          }

        }
   return result;



}
