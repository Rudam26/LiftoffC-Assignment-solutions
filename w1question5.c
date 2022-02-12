#include<stdio.h>
int main()
{
    int a,radius;
    float b,c;
    printf("Enter the radius of the circle:");
    scanf("%d",&radius);
    a=radius*2;
    b=2*3.14*radius;
    c=3.14*radius*radius;
    printf("The diameter of the circle=%dcm\n",a);
    printf("The circumference of the circle=%0.2fcm\n",b);
    printf("The area of the circle=%0.2fcm^2\n",c);
    return 0;
}