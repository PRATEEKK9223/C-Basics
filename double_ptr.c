#include<stdio.h>
void main()
{
  int a=10, b=20;
 int *p,*q,**r;
 p=&a;
 q=&p;
 r=&q;
 printf("value of a = %d %d %d %d\n",a,p,q,**r);
 printf("address of a = %x\n",p);
 printf("adress of a = %x\n", &a);
 printf("address of p = %x\n", q);
 printf("address of p = %x\n", &p);
 printf("address of q = %x\n", r);
 printf("address of q = %x\n",&q);
 printf("address og r = %x\n", &r);
 
 }