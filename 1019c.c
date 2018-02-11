#include <cstdio>
int gcd(int a, int b)
{
    if (b == 0)
        return a;
    return gcd(b, a % b);
}
int main(void)
{
    int cas, n, x, ans;
    scanf("%d", &cas);
    while (cas--)
    {
        scanf("%d%d", &n, &ans);
        for (int i = 1; i < n; i++)
        {
            scanf("%d", &x);
            ans = ans / gcd(ans, x) * x;
        }
        printf("%d\n", ans);
    }
    return 0;
}