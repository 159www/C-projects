

void setZeroes(int** matrix, int matrixSize, int* matrixColSize)
{
   
   int R[matrixSize*(*matrixColSize)];//保存每个零点的行号
   int C[(*matrixColSize)*matrixSize];//保存每个零点的列号
   int index_R=0;
   int index_C=0;
   //遍历整个二维数组寻找零点并储存位置信息
   for(int r=0;r<matrixSize;r++)
   {
       for(int c=0;c<(*matrixColSize);c++)
       {
           if(matrix[r][c]==0)
           {
              R[index_R]=r;
              C[index_C]=c;
              index_C++;
              index_R++;
              

           }
       }
   }
   //将每个零点所在行的元素置零
   for(int i=0;i<index_R;i++)
   {
       for(int j=0;j<(*matrixColSize);j++)
       {
           matrix[R[i]][j]=0;
       }
   }
   //将每个零点所在列的元素置零
    for(int i=0;i<index_C;i++)
   {
       for(int j=0;j<matrixSize;j++)
       {
           matrix[j][C[i]]=0;
       }
   }


   
   
}
