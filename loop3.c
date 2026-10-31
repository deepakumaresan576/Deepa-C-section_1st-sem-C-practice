#include <stdio.h>

int main()
{
    int i, n;
    int divisible = 0, notDivisible = 0;

    printf("Enter the limit: ");
    scanf("%d", &n);

    for(i = 1; i <= n; i++)
    {
        if(i % 5 == 0)
        {
            divisible++;
        }
        else
        {
            notDivisible++;
        }
    }

    printf("Divisible by 5: %d\n", divisible);
    printf("Not divisible by 5: %d\n", notDivisible);

    return 0;
}

