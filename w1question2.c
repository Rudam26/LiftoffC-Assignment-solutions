#include<stdio.h>
int main()
{
    int a,b;
    printf("Enter two numbers:");
    scanf("%d" "%d",&a,&b);
    if(a>b)
      printf("The maximum number is %d",a);
    else if(b>a)
      printf("The maximum number is %d",b);
    else if(b==a)
      printf("%d and %d are both equal numbers.",a,b);
    return 0;
}

