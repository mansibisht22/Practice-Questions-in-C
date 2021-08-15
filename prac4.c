#include <stdio.h>
int main()
{
    int p, q, i, j, num = 1;

    printf("Enter no. of lines: \n");
    scanf("%d", &p);

    printf("Enter no. of elements in a row: \n");
    scanf("%d", &q);

    for (i = 0; i < p; i++)
    {
        for (j = 1; j <= q; j++)
        {
            printf("%d ", num);
            num++;
        }
        printf("\n");
    }
}