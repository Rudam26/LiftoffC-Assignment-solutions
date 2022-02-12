#include<stdio.h>
int main()
{
    int a,b,c,sum;
    printf("Enter three angles of the traingle:");
    scanf("%d %d %d",&a,&b,&c);
    sum=a+b+c;
    if(sum==180 && a>0 && b>0 && c>0)
    printf("The given traingle is valid");
    else
    printf("The given triangle is not valid.");
    return 0;

}