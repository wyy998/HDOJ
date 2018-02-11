#include <stdio.h>

int main(void)
{
    double inp;
    while (scanf("%lf", &inp) != EOF)
    {
        if (inp >= 0)
            printf("%.2lf", inp);
        else
            printf("%.2lf", -inp);
        printf("\n");
    }
    return 0;
}