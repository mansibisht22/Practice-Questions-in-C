#include <stdio.h>
int main()
{

    int numbers[5], j, total;

    for (j = 0; j < 5; j++)
    {
        printf("Enter number %d: \n", j);
        scanf("%d", &numbers[j]);
    }

    for (j = 0; j < 5; j++)
    {
        if ((numbers[j] % 2) != 0)
        {
            total += numbers[j];
        }
    }
    printf("\nSum of all odd values: %d", total);
    printf("\n");
    return 0;
}