#include<stdio.h>
int add (int a, int b)
{printf("%d\n",a+b);
}
int sub(int a,int  b)
{
printf("%d\n",a-b);
}int checkAAndB(int a,int b)
{
printf("%d",a==b);
}
int main()
{
 int a,b;
 scanf("%d%d",&a,&b);
 add(a,b);
 sub(a,b);
 checkAAndB(a,b);
 
 return 0;
 }
 
