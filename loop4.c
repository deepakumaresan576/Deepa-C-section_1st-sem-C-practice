#include <stdio.h>

int main()
{
    int n, num;
    int div = 0, notdiv = 0;

    printf("How many numbers do you want to enter? ");
    scanf("%d", &n);

    for(int i = 1; i <= n; i++)
    {
        printf("Enter number: ");
        scanf("%d", &num);

        if(num % 5 == 0)
        {
            div++;
        }
        else
        {
            notdiv++;
        }
    }

    printf("Divisible by 5 = %d\n", div);
    printf("Not divisible by 5 = %d\n", notdiv);

    return 0;
}
