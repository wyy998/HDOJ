#include <stdio.h>
#include <string.h>

int main(void)
{
    int n,i,j,k,l;
    scanf("%d",&n);
    
    char a[1001] = {0}, b[1001] = {0};
    int len,la,lb;

    for( i=1; i<=n; ++i)
    {
        len = 0;
        int re[1001] = {0};
        scanf("%s %s",a,b);
        printf("Case %d:\n%s + %s = ",i,a,b);       // read & format
        
        la = strlen(a);                             // char to int
        lb = strlen(b);
        for( j=la-1,k=lb-1; j>=0 && k>=0; --j,--k)
        {
            re[len] += a[j] + b[k] -'0'-'0';
            if( re[len]>9 )
            {
                re[len] -= 10;
                re[len+1]++;
            }
            len++;
        }
        if( j>0)
        {
            for( ; j>=0; --j)
            {
                re[len++] += a[j] - '0';
            }
        }
        else if( k>0)
        {
            for( ; k>=0; --k)
            {
                re[len++] += b[k] - '0';
            }
        }

        for( l=len-1; l>=0 ; --l)                    // output result
        {
            printf("%d",re[l]);
        }

        printf("\n");                                 // last result don't need extra line
        if( i<n )
            printf("\n");
    }

    return 0;
}