#include<stdio.h>
int main()
{
 int a,b,c;
 scanf("%d%d%d",&a,&b,&c);
 if(a<b&&a<c)
  printf("a is smaller number");
 else if(b<a&&b<c)
  printf("b is smaller number");
 else
  printf("c is smaller number");
 return 0;
 }
