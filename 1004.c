#include <stdio.h>
#include <string.h>

int main(void)
{
    int n, i, j, m;
    char s[1000][16];
    char *max;

    while( scanf("%d",&n)!=EOF && n )
    {
        int c[1000] = {0};                 //气球对应计数器
        for( i=0; i<n; i++ )
        {
            scanf("%s",s[i]);
            for( j=0; j<i; j++)            //记其前面出现次数
            {
                if( strcmp( s[i], s[j])==0 )
                {
                    c[i]++;
                }
            }
        }
        m = 0;
        for( j=0; j<n; j++)             //find the max num
        {
            if( c[j]>=m )
            {
                m = c[j];
                max = s[j];
            }
        }
        printf("%s\n",max);
    }
    return 0;
}