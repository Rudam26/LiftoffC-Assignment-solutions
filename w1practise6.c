#include<stdio.h>
int main()
{
    float a, m,km;
    printf("Enter the length in centimeters:");
    scanf("%f",&a);
    km=a/1000;
    m=a/100;
    printf("\nThe length in meter=%0.3fm",m);
    printf("\nThe length in kilometer=%0.3fkm",km);
    return 0;

}