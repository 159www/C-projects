#include "QuickSort.h"
#include<stdio.h>
void QuickSort(int low,int high,int *nums)
{
    if(low>=high)//递归出口
    {
        return;
    }
    else
    {
        int previous=low;//默认以第一个数为基准
        int j=low;//指向小堆的最后元素的下标初始指向基准
        int p=low+1;//用于从第二个数开始遍历数组
        int temp;
        for(;p<=high;p++)
        {
            if(nums[p]>nums[previous])//如果元素比基准元素大
            {
                 //p继续向后移动
            }
            else if(nums[p]<nums[previous])//如果元素比基准元素小
            {   
                //把元素和大堆区的第一个数交换
                temp=nums[j+1];
                nums[j+1]=nums[p];
                nums[p]=temp;
                j+=1;
            }

        }
        //把基准元素和小堆区最后一个元素交换
        temp=nums[previous];
        nums[previous]=nums[j];
        nums[j]=temp;
        //继续对产生的无序大小堆区进行分区
        QuickSort(low,j-1,nums);
        QuickSort(j+1,high,nums);

    }





}
