#include<stdio.h>
double tinhtiengui(double Sotien, double Laisuat, int year){
    return Sotien+Sotien*(Laisuat/100) *year;
}
int main()
{
    double Sotien, Laisuat;
    int year;
    printf("Nhap so tien: ");
    scanf("%lf", &Sotien);
    printf("Nhap lai suat: ");
    scanf("%lf",&Laisuat);
    printf("Nhap so nam: ");
    scanf("%d",&year);
    printf("So tien nhan duoc sau %d nam la: %.2lf \n",year,tinhtiengui(Sotien,Laisuat,year));

    return 0;
}