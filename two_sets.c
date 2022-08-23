/**
 * Note: The returned array must be malloced, assume caller calls free().
 */
//冒泡排序
void sort(int *nums,int size)
{  
    int temp=0;
    for(int i=0;i<size;i++)
    {
        for(int j=0;j<=size-i-2;j++)
        {
           if(nums[j]>nums[j+1])
           {
               temp=nums[j+1];
               nums[j+1]=nums[j];
               nums[j]=temp;
           }
        }
    }
}
//将每个元素设置为-65535
void clear(int *nums,int size)
{
   for(int i=0;i<size;i++)
   {
       nums[i]=-65535;
   }

}
int* intersect(int* nums1, int nums1Size, int* nums2, int nums2Size, int* returnSize)
{  
    int index=0;
    int rerurn_size=0;//返回数组大小
    //先排序
    sort(nums1,nums1Size);
    sort(nums2,nums2Size);
    int i=0;//遍历num1的下标
    int j=0;//遍历num2的下标
    //再分配一个足够大的内存空间临时储存集合
    int size=(nums1Size<nums2Size)?nums1Size:nums2Size;//交集大小最大为较小的集合大小
    int *p=malloc(sizeof(int)*size);
    clear(p,size);
    //将交集暂时存入临时空间
    while(i<nums1Size&&j<nums2Size)
    {
        if(nums2[j]<nums1[i])
        {
            j++;
        }
        else if(nums2[j]>nums1[i])
        {
            i++;
        }
        else if(nums1[i]==nums2[j])
        {
            
            //储存相交元素
            p[index]=nums1[i];
            i++;
            j++;
            index++;
        }

    }
    //确定返回数组大小
    for(int i=0;i<size;i++)
    {
        if(p[i]!=-65535)
        {
           rerurn_size++;
        }
    }
    //精准的分配要返回数组的内存空间
    *returnSize=rerurn_size;
    int *r=malloc(sizeof(int)*rerurn_size);
    //将临时空间中的交集转移到要返回指针指向的内存空间
    index=0;
     for(int i=0;i<size;i++)
    {
        if(p[i]!=-65535)
        {
            r[index]=p[i];
            index++;
        }
    }

  return r;
