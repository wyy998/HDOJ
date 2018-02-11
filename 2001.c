#include <stdio.h>
#include <math.h>

typedef struct pointer
{
    double x, y;
} Point;

double dis(Point a, Point b)
{
    return sqrt((a.x - b.x) * (a.x - b.x) + (a.y - b.y) * (a.y - b.y));
}

int main(void)
{
    Point a, b;
    while (
        scanf("%lf %lf %lf %lf", &a.x, &a.y, &b.x, &b.y) != EOF)
    {
        printf("%.2lf\n", dis(a, b));
    }
    return 0;
}