#include <stdio.h>

typedef struct Time
{
    int h, m, s;
} Time;

Time time_add(Time a, Time b)
{
    Time re;
    int fg = 0;
    re.s = a.s + b.s;
    if (re.s > 59)
    {
        re.s -= 60;
        fg = 1;
    }
    re.m = a.m + b.m + fg;
    fg = 0;
    if (re.m > 59)
    {
        re.m -= 60;
        fg = 1;
    }
    re.h = a.h + b.h + fg;
    return re;
}

int main(void)
{
    Time a, b, re;
    int n;
    scanf("%d", &n);
    while (n--)
    {
        scanf("%d %d %d %d %d %d",
              &a.h, &a.m, &a.s, &b.h, &b.m, &b.s);
        re = time_add(a,b);
        printf("%d %d %d\n", re.h, re.m, re.s);
    }
    
    return 0;
}