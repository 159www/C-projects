#include <stdio.h>
#include<stdlib.h>
int lengthOfLongestSubstring(char * s)
{
    int max_length;//最长无重复字符串的长度
    int changeflag=0;//窗口改变标志
    //获取字符串长度
    int length=0;
    while(*s!='\0')
    {
        length++;
        s++;
    }
    s-=length;
    if(length==0)
    {
        return 0;
    }
    if(length==1)
    {
        return 1;
    }
    //无重复元素的字符串起始指针
    int start=0;
    int end=0;
    for(int i=1;i<length;i++)
    {
        //遍历字符串并将从未出现过的字符加入滑动窗口
        for(int j=start;j<=end;j++)
        {
            if(s[j]!=s[i])
            {

                continue;
            }
            else if(s[j]==s[i])//得到一个无重复子串
            {
                changeflag=1;
                // max_length=end-start+1;
                if((end-start+1)>max_length)//保留最大无重复子串长度
                {
                    max_length=(end-start+1);
                }
                //调整窗口位置
                start=end+1;
                end+=1;
                i=end;
                break;
            }
        }

        if(changeflag==0)
        {
            end+=1;
            max_length=(end-start+1);
        } else
        {
            changeflag=0;
        }


    }

    return max_length;



}
int main()
{
    printf("Hello, World!\n");
    char *s="dvdf";
    int a=lengthOfLongestSubstring(s);
    return 0;
}
