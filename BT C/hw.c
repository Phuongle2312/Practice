#include <stdio.h>
void stable_odds_first(int a[], int n)
{
    int temp[n];
    int index = 0;
    for (int i = 0; i < n; i++)
    {
        if (a[i] % 2 != 0)
        {
            temp[index++] = a[i];
        }
    }
    for (int i = 0; i < n; i++)
    {
        if (a[i] % 2 == 0)
        {
            temp[index++] = a[i];
        }
    }
    for (int i = 0; i < n; i++)
    {
        a[i] = temp[i];
    }
}
int main()
{
    int a[] = {2, 3, 4, 5};
    int n = sizeof(a) / sizeof(a[0]);
    stable_odds_first(a, n);
    for (int i = 0; i < n; i++)
    {
        printf("%d ", a[i]);
    }
    return 0;
}