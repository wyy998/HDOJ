#include <stdio.h>
#define max 10000

int main(void)
{
    // const int max = 10000;
    int n, i, u;
    while (scanf("%d", &n) != EOF)
    {
        if (n < 0)
            continue;
        int re[max] = {0}; //array of 10000, each means 4(1000)
        re[0] = 1;
        int len = 0;
        for (i = 2; i <= n; i++)
        {
            int fg[max] = {0};
            for (u = 0; u <= len; u++) //处理乘法
            {
                re[u] *= i;
                // if (re[u] == 0 && u < len)
                //     fg[u + 1] += i;
                // if (re[u] > 9999) //进位
                // {
                //     fg[u + 1] += re[u] / max;
                //     re[u] = re[u] % max;
                //     if (u + 1 > len)
                //         len = u + 1;
                // }
            }
            for (u = 0; u < max; u++) //处理进位
            {
                re[u] += fg[u];
                if (re[u] > 9999)
                {
                    fg[u + 1] += re[u] / max;
                    re[u] = re[u] % max;
                }
                if (re[u] && u > len)
                    len = u;
            }
        }
        //输出
        printf("%d", re[len]); //注意如果是首个则不用补0
        for (u = len - 1; u >= 0; u--)
        {
            printf("%04d", re[u]); //中间的数位要补齐！！！
        }
        printf("\n");
    }
    return 0;
}

// fucking problem, the result of max! will be 36000 long
// 有shi以来最惨的题，WA了6次才过，注意输出格式各个细节