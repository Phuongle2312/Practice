#include <stdio.h>
void count_sign(const int a[], int n){
    int am =0;
    int duong = 0;
    int khong = 0;
    for (int i = 0; i < n; i++)
    {
        if (a[i] < 0)
        {
            am +=1;
        }
        else if (a[i]>0)
        {
            duong +=1;
        }
        else if (a[i] == 0){
            khong +=1;
        }
    }
    printf("So Duong: %d\n", duong);
    printf("So am: %d\n", am);
    printf("So Khong: %d\n",khong);
}

int main()
{
    int n;
    int a[100];
    printf("Nhap n: ");
    scanf("%d",&n);
    
    for (int i = 0; i < n; i++)
    {
        printf("a[%d]", i);
        scanf("%d",&a[i]);
    }
    count_sign(a,n);
    return 0;
}