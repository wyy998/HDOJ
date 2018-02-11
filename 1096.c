#include <stdio.h>

int main(void)
{
    int n,m,a,sum;
    scanf("%d",&n);
    while(n--)
    {
        scanf("%d",&m);
        sum=0;
        while(m--)
        {
            scanf("%d",&a);
            sum+=a;
        }
        printf("%d\n",sum);
        if(n!=0)
            printf("\n");
    }

    return 0;
}