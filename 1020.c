#include <stdio.h>

int main(void)
{
    int n;
    scanf("%d", &n);
    char s[10000];
    // char re[10000];
    while (n--)
    {
        scanf("%s", s);
        if (s[1] == '\0')
        {
            printf("%c\n", s[0]);   //卧槽，这里少加了个\n，找半天，WA了3次，原来用re的版本也行
            continue;
        }
        int ct = 0; //i=0;
        char *p = s;
        while (*(p) != '\0')
        {
            if (*(p + 1) == *p)
            {
                ct++;
            }
            else
            {
                if (ct)
                {
                    // re[i++] = ct + 1 + '0';
                    // re[i++] = *p;
                    printf("%d%c", ct + 1, *p);
                    ct = 0;
                }
                else
                {
                    // re[i++] = *p;
                    printf("%c", *p);
                }
            }
            p++;
        }
        // re[i] = '\0';
        // printf("%s\n", re);
        printf("\n");
    }

    return 0;
}