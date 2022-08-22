/**
 * Note: The returned array must be malloced, assume caller calls free().
 */
int* twoSum(int* nums, int numsSize, int target, int* returnSize)
{   /*
    //双指针法
    //不可行排序后下标发生改变
    (*returnSize)=2;
    int *p=malloc(sizeof(int)*2);
    int left=0;
    int right=numsSize-1;
    //排序

    int temp=0;
    for(int i=0;i<numsSize;i++)
    {
        for(int j=0;j<=numsSize-i-2;j++)
        {

           if(nums[j]>nums[j+1])
           {
               temp=nums[j+1];
               nums[j+1]=nums[j];
               nums[j]=temp;
           }
        }
    }
   
  
    while(left<right)
    {
      if(nums[left]+nums[right]<target)
      {
          left++;
      }
      else if(nums[left]+nums[right]>target)
      {
          right--;
      }
      else if(nums[left]+nums[right]==target)
      {
         
         p[0]=left;
         p[1]=right;
         break;
      }

    }

   return p;
   */
   
   //暴力算法
    *returnSize=2;
   int *p=malloc(sizeof(int)*(*returnSize));
  //尝试所有组合方式
   for(int i=0;i<numsSize;i++)
   {
       for(int j=0;j<numsSize;j++)
       {
         if(j!=i)
         {
             if(nums[j]+nums[i]==target)
             {
                 p[0]=i;
                 p[1]=j;
                 break;
             }
         }

       }
   }
   return p;
   
}
