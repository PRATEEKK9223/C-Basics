#include<stdio.h>
int main()
{
 int i,j;
 int a[2][3], b[3][2];
 printf("enter the 2d array");
    for(i=0;i<2;i++)
    {
        for(j=0;j<3;j++)
        { 
            scanf("%d",&a[i][j]);
        }
    }
  printf("entered 2d array\n");
    for(i=0;i<2;i++)
    {
        for(j=0;j<3;j++)
        { 
            printf("%d\t",a[i][j]);
        }
        printf("\n");
        }
   printf("after inversing the matrix\n");
        for(i=0;i<3;i++)
        {
        for(j=0;j<2;j++)
        { 
            b[i][j]=a[j][i];
            printf("%d\t",b[i][j]);
        }
       printf("\n");
    }
  return 0;
  
}