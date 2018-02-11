#include <stdio.h>

int main(void)
{
    int n,a,b;
    while(scanf("%d",&n)&&n)
    {
        b=0;
        while(n--)
        {
            scanf("%d",&a);
            b += a;
        }
        printf("%d\n",b);
    }
    return 0;
}