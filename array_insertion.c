#include<stdio.h>
void main()
{

  int i, j,count=0;
  int a[10];
  printf("enter the array elements\n");
  for(i=0;i<5;i++)
  {
   scanf("%d", &a[i]);
   count++;
  }
  printf("number of element in array:%d\n", count);
  int pos, item;
  printf("enter position and item you want to add :\n");
  scanf("%d %d", &pos, &item);
  for(i=count;i>=pos;i--)
  {
   a[i]=a[i-1];
   }
   a[i]=item;
   count++;
   
   printf("array after insettion\n");
   for(i=0;i<count;i++)
   {
    printf("%d\t", a[i]);
    }
    printf("number of item ::%d",count);
}