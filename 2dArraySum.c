#include<stdio.h>
void main()
{
  int a[2][3];
  int i, j, sumrow, sumcol;
  printf("enter 2d array datas\n");
  for(i=0;i<2;i++)
  {
   for(j=0;j<3;j++)
   {
    scanf("%d",&a[i][j]);
   }
  }
  for(i=0;i<2;i++)
  {
    sumrow=0;
    sumcol=0;
   for(j=0;j<3;j++)
   {
    sumrow+=a[i][j];
    sumcol+=a[j][i];
    
   }
   printf("sum of row=%d\n", sumrow);
   printf("sumof column=%d\n",sumcol);
  }
  }