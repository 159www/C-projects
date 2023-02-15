int Search_Target_2( const int *str,int str_len,int target)
{
    int start=0;//查找区起点
    int end=str_len-1;//查找区终点
    int middle=(start+end/2);//二分点
    if(str[middle]==target)//直接查到返回下标
    {
        return middle;
    }
    while(str[middle]!=target)//循环查找
    {
       if(str[middle]>target)//查找元素在二分点左边
       {
           end=middle-1;//更新查找区终点
       }
       else if(str[middle]<target)//查找元素在二分点右边
       {
           start=middle+1;//更新查找区起点
       }
       else if(str[middle]==target)//二分点为查找元素直接返回
       {
           return middle;
       }
       else if(start>end)//起点位置大于终点不能存在查找元素
       {
           break;
       }
       middle=(start+end)/2;
    }
    if(str[middle]==target)
    {
        return middle;
    }
    else
    {
        return -1;
    }

}
