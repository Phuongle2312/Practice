#include <stdio.h>
int powerBill(int kwh)
{
    int k1 = 1200;
    int k2 = 1500;
    int k3 = 2000;
    if (kwh <= 50)
    {
        return kwh * k1;
    }
    else if (kwh > 50 && kwh <= 100)
    {
        return 50 * k1 + (kwh - 50) * k2;
    }
    else
    {
        return 50 * k1 + 50 * k2 + (kwh - 100) * k3;
    }
}
int main()
{
    int kwh;
    printf("Nhap so kwh:\n");
    scanf("%d", &kwh);
    printf("%d kwh tien dien phai dong la %d\n", kwh, powerBill(kwh));
    return 0;
}