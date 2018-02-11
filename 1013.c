#include <stdio.h>
#include <string.h>

int main(void)
{
    char c;
    int re = 0;
    int end = 0;
    while (c = getchar())
    {
        // int p = strlen(str) - 1;
        // int tmp = 0;
        if (re == 0 && c == '0')
            break;
        if (c != '\n')
        {
            re += c - '0';
        }
        else
        {
            int tmp = 0;
            while (re > 9)
            {
                while (re > 9)
                {
                    tmp += re % 10;
                    re /= 10;
                }
                re += tmp;
                tmp = 0;
            }
            printf("%d\n", re);
            re = 0;
        }
        // while (p >= 0)
        // {
        //     re += str[p] - '0';
        //     p--;
        // }
    }
    return 0;
}

//be care the length of input is not clear(ultimate)