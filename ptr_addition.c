#include<stdio.h>
void main()
{
  int a[10]={10,20,30,40,50};
  int *p=&a;
  for(int i=0;i<5;i++)
  {
   p=&a[0];
   p=p+i;
   printf("%d\n",*p);
  }
  }