/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     struct ListNode *next;
 * };
 */


struct ListNode* addTwoNumbers(struct ListNode* l1, struct ListNode* l2)
{  
    
    int e=1;
    long temp;
    long sum1=0;
    long sum2=0;
    long sum=0;
   while(l1)
   {
     sum1+=l1->val*e;
     e*=10;
     l1=l1->next;
   }
   e=1;
   while(l2)
   {
       sum2+=l2->val*e;
       e*=10;
       l2=l2->next;
   }
   e=1;
   sum=sum1+sum2;
   struct ListNode *head=NULL;
   struct ListNode *result=NULL;
   if(sum==0)
   {
       struct ListNode *k=malloc(sizeof(struct ListNode));
       k->val=sum;
       k->next=NULL;
       result=k;
   }
   while(sum)
   {
       temp=sum%10;
       sum/=10;
      struct ListNode *p=malloc(sizeof(struct ListNode));
      p->val=temp;
      p->next=NULL;
      if(head==NULL)
      {
          head=p;
          result=head;
      }
      else if(head!=NULL)
      {
          
          head->next=p;
          head=head->next;//将头指针指向下一个节点
      }

   }


   return result;



}
