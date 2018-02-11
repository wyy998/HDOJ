#include <stdio.h>

int gongyueshu(int a, int b)
{
    if (b == 0)
        return a;
    return gongyueshu(b, a % b);
}
int sol(int a, int b)
{
    return b / gongyueshu(a, b) * a;
}

int main(void)
{
    int n;
    scanf("%d", &n);
    while (n--)
    {
        int c, i, inp;
        scanf("%d", &c);
        int re = 1; //max = 0;
        for (i = 0; i < c; i++)
        {
            scanf("%d", &inp);
            re = sol(re, inp);
            // if (set[i] > max)
            //     max = set[i];
        }

        // int fg = 1;
        // while (fg)
        // {
        //     re += max;
        //     for (i = 0; i < c; i++)
        //     {
        //         if (re % set[i])
        //             fg = 0;
        //     }
        //     if (fg == 0)
        //     {
        //         fg = 1;
        //     }
        //     else
        //     {
        printf("%d\n", re);
        //         break;
        //     }
        // }
    }

    return 0;
}

//果然大佬的算法比较牛逼，原来自写的的靠试出来TimeExceeded
//a与b的最小公倍数为a*b/最大公约数，防止溢出，改为b/~ *a