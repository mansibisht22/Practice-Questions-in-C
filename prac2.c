// Write a C program to print a number, it’s square and cube in a line, starting from 1
//and print n lines. Accept number of lines (n, integer) from the user.

#include <stdio.h>
int main()
{
    int lines, i;

    printf("Enter number of lines: \n");
    scanf("%d", &lines);

    for (i = 0; i < lines; i++)
    {
        printf("%d %d %d \n", i, i * i, i * i * i);
    }
}