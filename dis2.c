#include<stdio.h>
int main()
{
 float a,b,c,total=0;
 scanf("%f%f%f",&a,&b,&c);
 total=a+b+c;
 printf("%f\n",total);
 printf("dis=%f\n",((total*2)/100));
 printf("bill=%f\n",total-((total*2)/100));
 return 0;
 }
 
 
 
