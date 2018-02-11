#include <stdio.h>

int main(void)
{
    int n, i, re, pre;

    while (scanf("%d", &n) && n)
    {
        int list[100];
        re = 0;
        pre = 0;
        for (i = 0; i < n; i++)
        {
            scanf("%d", &list[i]);
            if (list[i] - pre > 0)
                re += (list[i] - pre) * 6 + 5;
            else
                re += (pre - list[i]) * 4 + 5;
            pre = list[i];
        }
        printf("%d\n", re);
    }
    return 0;
}