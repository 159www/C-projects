int firstUniqChar(char * s)
{
   int length=0;
   int count=0;
   while(*s!='\0')
   {
       length++;
       s++;
   }
   s-=length;//指针复原
   int *dp=malloc(sizeof(int)*length);
   //dp[i]表示字符串对应位置元素出现的次数
   for(int i=0;i<length;i++)
   {
       for(int j=0;j<length;j++)
       {
           if(s[i]==s[j])
           {
               count++;
           }
           if(count>1)//出现超过一次不再可能唯一
           {
               break;
           }
       } 
       if(count==1)
       {
           return i;
       } 
      // dp[i]=count;
       count=0; 
      
   }
  /* 
   for(int i=0;i<length;i++)
   {
       if(dp[i]==1)
       {
           return i;
       }
   }
   */
   
   return -1;
   
}
