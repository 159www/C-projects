
int maxProfit(int* prices, int pricesSize)
{
  /*
  //暴力算法超出时间限制
 int temp=0;
 for(int i=0;i<pricesSize;i++)
 {
     for(int j=i+1;j<pricesSize;j++)
     {
       if(prices[j]-prices[i]>temp)
       {
           temp=prices[j]-prices[i];
       }
     }
 }
 return temp;
 */
 //动态规划
 //dp数组定义
 //dp[i] 表示i以及i以前的最小价格
 int *dp=malloc(sizeof(int)*pricesSize);
 int max=0;
 dp[0]=prices[0];//只有一天故最小价格为第一天价格
 for(int i=1;i<pricesSize;i++)
 {
    dp[i]=(prices[i]<dp[i-1])?prices[i]:dp[i-1];
    if(prices[i]-dp[i-1]>max)//计算每天的最大收益
    {
        max=prices[i]-dp[i-1];
    }
 }
  
  return max;
}
