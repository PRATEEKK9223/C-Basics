#include<stdio.h>
#define MUL(a,b) if(a>b)\
                    printf("%d greater", a);\
                  else \ 
                    printf("%d greater", b);
void main()
{
 MUL(4,3);
 #define MUL
}
 
#define and undef
