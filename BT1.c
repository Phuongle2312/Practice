#include <stdio.h>
double c_to_f(double c)
{
    return c * 9 / 5 + 32;
}

double f_to_c(double f)
{
    return (f - 32) * 5 / 9;
}
int main()
{
    double celsius, f;
    printf("Nhap gia tri cho c ");
    scanf("%lf", &celsius);
    printf("%lf C chuyen sang F la: %lf\n", celsius, c_to_f(celsius));
    printf("Nhap gia tri cho f ");
    scanf("%lf", &f);
    printf("%lf F chuyen sang C la : %lf\n", f, f_to_c(f));
    return 0;
}
