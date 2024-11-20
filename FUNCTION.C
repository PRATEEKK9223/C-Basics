//Call by value
//Call by refrence

#include<stdio.h>
void funvalue(int, int );
void funrefrence(int*, int*);
void main()
{
 int x=10,y=30;
 funvalue(x,y);
 printf("x=%d & y=%d\n", x, y);
 funrefrence(&x, &y);
 printf("x''=%d & y''=%d\n", x, y);
 
 
 }   
 void funvalue(int x,int y)
 {
  x=100;
  y=300;
  printf("x=%d && y=%d\n", x, y);
 }
 
 //void fun(int*, int* );
/*void main()
{
 int x=10,y=30;
 fun(&x,&y);
 printf("x=%d & y=%d\n", x, y);
 }  */   
 void funrefrence(int* x,int* y)
 {
  *x=100;
  *y=300;
  printf("x''=%d && y''=%d\n", *x, *y);
 }
