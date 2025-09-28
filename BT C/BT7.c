#include <stdio.h>
void minmax(const int a[], int n, int *min, int *max)
{
    
    *min = a[0];
    *max = a[0];
    for (int i = 0; i < n; i++)
    {
        if (a[i] > *max)
        {
            *max = a[i];
        }
        if (a[i] < *min)
        {
            *min = a[i];
        }
    }
}
int main()
{
    int n;
    int a[100];
    int min, max;

    printf("Nhap n:\n");
    scanf("%d", &n);
    for (int i = 0; i < n; i++)
    {
        scanf("%d", &a[i]);
    }
    minmax(a, n, &min, &max);
    printf("Gia tri nho nhat: %d\n",min);
    printf("Gia tri lon nhat: %d\n", max);
    return 0;
}