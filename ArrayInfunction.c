// passinh array in function as a argument
#include<stdio.h>
int avg(int [], int);

void main()
{
int average, size;
 int marks[]={50,50,50,50,50,50};
 size=sizeof(marks)/sizeof(marks[0]);
 printf("%d\n", size);
 average=avg(marks, size);
 printf("%d", average);
 }
 int avg(int marks[], int a)
 {
  int i, sum=0;
  for(i=0;i<a;i++)
  {
   sum=sum+marks[i];
   
  }
   int average ;
   average=sum/a;
   return average ;
   }
  

