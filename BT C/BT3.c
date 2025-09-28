#include <stdio.h>
int leapYear(int year)
{
    int isleap = 0;
    if (year % 400 == 0 || year % 4 && year % 100 != 0)
    {
        isleap = 1;
    }
    return isleap;
}

int dayinMonth(int month, int year)
{
    switch (month)
    {
    case 1:
    case 3:
    case 5:
    case 7:
    case 8:
    case 10:
    case 12:
        return 31;
        break;
    case 4:
    case 6:
    case 9:
    case 11:
        return 30;
    case 2:
        if (leapYear(year))
        {
            return 29;
        }
        else
        {
            return 28;
        }
    }
}
int main()
{
    int month, year;

    printf("Nhap thang: ");
    scanf("%d", &month);
    printf("Nhap nam: ");
    scanf("%d", &year);

    if (leapYear(year) == 1)
    {
        printf("%d la nam nhuan.\n");
    }
    else
    {
        printf("%d khong phai nam nhuan.\n");
    }
    printf("%d/%d co %d ngay.\n", month, year, dayinMonth(month, year));
    return 0;
}