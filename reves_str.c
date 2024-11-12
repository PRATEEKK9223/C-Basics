#include<stdio.h>
#include<string.h>
void main()
{
 char name[30]="prateek akki";
 char clg[30]="jnnce";
 char name1[30];
 
 int len1,len2;
 
 //printf("%s\n",name);
 len1=strlen(name);
 len2=strlen(clg);
 /*printf("length1=%d, lentth2=%d", len1,len2);
 for(int i=0;i<=3;i++)
 {
  name[len1+i]=clg[i];
 //len1++;
 
 }
 printf("\n%s",name);*/
 int j=0;
 
 for(int i=len1-1;i>=0;i--)
 {
  name1[j]=name[i];
  j++;
 }
 printf("%s\n",name1);
 
  
}