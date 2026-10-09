#include<stdio.h>
int main()
{
 int copies,sell,cost,rent,earn,profit,Totalprofit;
 rent=100;
 
 scanf("%d%d%d",&copies,&sell,&cost);
 printf("copies=%d\n sell=%d\n cost=%d\n",copies,sell,cost);
 printf("earn=%d\n",copies*sell);
 printf("profit=%d\n",earn-cost*copies);
 printf("Totalprofit=%d",profit-rent);
 return 0;
 }
