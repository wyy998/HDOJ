#include <stdio.h>

int main(void)
{
    int t, n, i, tmp, sum, max, k, st, ed;
    scanf("%d", &t);

    for (k = 1; k <= t; k++)
    {
        int a[100000] = {0};    //初始化
        max = -1001;
        sum = 0;
        i = 0;
        tmp = 0;
        scanf("%d", &n);        //读数
        for (i = 0; i < n; i++)
        {
            scanf("%d", &a[i]);
        }
        for (i = 0; i < n; i++)
        {
            sum += a[i];        //求和
            if (sum > max)      //记录出现的和最大值及位置
            {
                max = sum;
                ed = i;
                st = tmp;
            }
            if (sum < 0)        //更新和，从新起点处起求和
            {
                sum = 0;
                tmp = i + 1;
            }
        }
        printf("Case %d:\n%d %d %d\n", k, max, st + 1, ed + 1);
        if (k != t)             //最后一个结果没有多余行
            printf("\n");
    }
    return 0;
}