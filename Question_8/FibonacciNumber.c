#include <stdio.h>
int main()
{
    int n, first = 0, second = 1, next;
    printf("Enter the number of terms\n");
    scanf("%d", &n);
    printf("First %d terms of Fibonacci series are :-\n", n);
    for (int c = 0; c < n; c++)
    {
        if (c <= 1)
        {
            next = c;
        }
        else
        {
            next = first + second;
            first = second;
            second = next;
        }
        printf("%d,", next);
    }
    return 0;
}