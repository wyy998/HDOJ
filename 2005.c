#include <stdio.h>

typedef struct Time
{
    int year, month, date;
} Time;
int Mon[12] = {31, 0, 31, 30, 31, 30, 31, 31, 30, 31, 30, 31};

int sol(Time a)
{
    int re = 0, i;
    if ((a.year % 4 == 0 && a.year % 100 != 0) ||
        (a.year % 400 == 0))
        Mon[1] = 29;
    else
        Mon[1] = 28;
    for (i = 0; i < a.month - 1; i++)
    {
        re += Mon[i];
    }
    return re + a.date;
}

int main(void)
{
    Time a;
    while (scanf("%d/%d/%d", &a.year, &a.month, &a.date) != EOF)
    {
        printf("%d\n", sol(a));
    }
    return 0;
}

//注：能被400整除，或者不能被100整除但能被4整除，的为闰年！