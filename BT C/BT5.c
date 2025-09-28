#include <stdio.h>
long long sum_odds_to_n(int n)
{
    long long ketqua = 0;
    for (int i = 0; i <= n; i++)
    {
        if (i % 2 != 0)
        {
            ketqua += i;
        }
    }
    return ketqua;
}
int main()
{
    int n;
    printf("Nhap gia tri cho n:");
    scanf("%d", &n);
    printf("Tong so le tu 1 den %d la:%lld ", n, sum_odds_to_n(n));
    return 0;
}