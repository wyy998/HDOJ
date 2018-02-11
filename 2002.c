#include <stdio.h>
#define PI 3.1415927
double ballV(double r)
{
    return PI * r * r * 4 / 3 * r;
}

int main(void)
{
    double r;
    while (scanf("%lf", &r) != EOF)
    {
        printf("%.3lf\n", ballV(r));
    }
    return 0;
}