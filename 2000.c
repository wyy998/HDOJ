#include <stdio.h>

void swap(char *a, char *b)
{
    int c = *a;
    *a = *b;
    *b = c;
}

int main(void)
{
    char asc[4];
    while (scanf("%c%c%c%c", &asc[0], &asc[1], &asc[2], &asc[3]) != EOF)
    {
        if (asc[0] > asc[1])
            swap(&asc[0], &asc[1]);
        if (asc[1] > asc[2])
            swap(&asc[1], &asc[2]);
        if (asc[0] > asc[1])
            swap(&asc[0], &asc[1]);

        printf("%c %c %c\n", asc[0], asc[1], asc[2]);
    }
    return 0;
}