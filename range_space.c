void clear_char(char *p,int length)//将字符串用空格填充
{
    for(int i=0;i<length;i++)
    {
        p[i]=' ';
    }
}
int get_length(char *p)//得到字符串长度
{
    int temp=0;
    while(*p!='\0')
    {
        temp++;
        p++;
    }
    return temp;
}
int get_space(char *p,int length)//得到字符串中空格的数量
{ 
    int temp=0;
   for(int i=0;i<=length-1;i++)
   {
     if(p[i]==' ')
     temp++;
     
   }
   return temp;
}
int get_v(char *p,int length)//得到字符串中单词数量
{
   int temp=0;
    for(int i=0;i<length;i++)
    {
        if(p[i]!=' ')
        { 
            while(p[i]!=' '&&i<=length-1)
            {
                i++;
            }
           temp++;
        }
    }
   return temp;
}

char * reorderSpaces(char * text)
{   
    int index=0;
    int space=0;//空格数
    int vercabualary=0;//单词数
    int interval_space=0;//空格间隔数量
    int length=get_length(text);
    char *result=malloc(sizeof(char)*(length+1));
    result[length]='\0';
    //先将字符串中全部的元素变为空格就不用在最后添加空格了
    clear_char(result,length);
    //获得空格数
    space=get_space(text,length);
    //获得单词数
    vercabualary=get_v(text,length);
    if(vercabualary!=1)//异常处理
    {
    //获得空格间隔长度
    interval_space=space/(vercabualary-1);
    }
    for(int i=0;i<length;i++)
    {
        if(text[i]!=' ')
        {
            while(text[i]!=' '&&i<=length-1&&index<=length-1)
            {
                result[index]=text[i];
                i++;
                index++;
            }
            int x=interval_space;
            while(x>0&&index<=length-1)
            {
                result[index]=' ';
                index++;
                x--;
            }

        }

    }
    return result;

}
