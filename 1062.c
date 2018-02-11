#include <stdio.h>
#include <string.h>

int main(void)
{
    int n;
    scanf("%d", &n);
    getchar();
    while (n--)
    {
        int i = 0, start = 0, end = 0;
        char s[1000];
        gets(s);
        for (i = 0; i <= strlen(s); i++)
        {
            if (s[i] == ' ' || s[i] == '\0')
            {
                end = i - 1;
                while (end >= start)
                {
                    printf("%c", s[end]);
                    end--;
                }
                if (s[i] != '\0')
                    printf(" ");
                start = i + 1;
            }
        }
        printf("\n");
        // if (s[i] == '\0')
        //     break;
    }

    return 0;
}

//Although with warning, but 'gets()' could still be used!   hahaha