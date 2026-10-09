#include<stdio.h>
int main()
{
int a,b,choice;
printf("enter two integers=");
scanf("%d%d ",&a,&b);
printf("1.Addition");
printf("2.Subtraction\n");
printf("3.Multiplication\n");
printf("4.Divisinon\n");
printf("enter your choice);
switch(choice)
{
 press1:
 printf("addition=%d",a+b);break;
 press2:
 printf("subtraction=%d", a-b);break;
 press3:
 printf("Multiplication=%d", a*b);break;
 press4:
 printf("Divisinon=%d", a/b);break;
 default:
 printf("not 1,2,3,4");
 }
 return 0;
 }
