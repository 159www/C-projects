void merge(int* nums1, int nums1Size, int m, int* nums2, int nums2Size, int n)
{
  int temp;
  // 先把nums2中的元素放入nums1
  for(int i=0;i<nums2Size;i++)
  {
      nums1[m+i]=nums2[i];
  }

  //再对nums进行排序
  //冒泡排序
  for(int i=0;i<nums1Size;i++)
  {
      for(int j=0;j<nums1Size-i-1;j++)
      {
          if(nums1[j]>nums1[j+1])
          {
              temp=nums1[j+1];
              nums1[j+1]=nums1[j];
              nums1[j]=temp;         
          }
      }
  }
  }
