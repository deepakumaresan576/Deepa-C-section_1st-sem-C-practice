#include<stdio.h>
  int main()
{
    char name[32];
    //scanf("%s",name);
    scanf("%s[^\n]",name);
    printf("%s",name);
    return 0;
    }
