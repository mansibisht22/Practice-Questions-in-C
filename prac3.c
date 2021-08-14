//Write a C program to print 3 numbers in a line,
//starting from 1 and print n lines. Accept number of lines (n, integer) from the user.

#include <stdio.h>
int main()
{

    int n, i,j=1, x = 0;
    printf("Enter number of lines: \n");
    scanf("%d", &n);

    for (i = 1; i <= n; i++)
    {
        while (x < 3)
        {
            printf("%d ", j++);
            x++;
        }
        x=0;
        printf("\n");
    }
    return 0;
}

