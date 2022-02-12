#include<stdio.h>
int main()
{
    int a,b,c;
    printf("Enter three sides of the traingle:");
    scanf("%d %d %d",&a,&b,&c);
    if(a==b && b==c && a==c)
    {
    printf("It is an eqilateral triangle");
    }
    else if(a==b || b==c || a==c)
    {
    printf("It is an isoceles triangle");
    }
    else
    {
    printf("It is a scalene triangle");
    }

    return 0;
}