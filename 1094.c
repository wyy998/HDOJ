#include <stdio.h>

int main(void)
{
    int n, a, sum;
    while (scanf("%d", &n) != EOF)
    {
        sum = 0;
        while (n--)
        {
            scanf("%d", &a);
            sum += a;
        }
        printf("%d\n", sum);
    }

    return 0;
}