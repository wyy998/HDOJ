#include <stdio.h>

int main(void)
{
    int n, in;
    while (scanf("%d", &n) != EOF)
    {
        int re = 1;
        while (n--)
        {
            scanf("%d", &in);
            if (in % 2)
                re *= in;
        }
        printf("%d\n", re);
    }
    return 0;
}