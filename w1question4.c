#include<stdio.h>
int main()
{
    int a,b,operation;
    printf("Enter two numbers ");
    scanf("%d %d",&a,&b);
    printf("Select the arithmetic operation you want to do\n ");
    printf("1 for addition\n");
    printf("2 for substraction\n");
    printf("3 for multiplication\n");
    printf("4 for modulus\n");
    printf("5 for division\n");
    printf("Enter your choice:");
    scanf("%d",&operation);

    switch (operation)
    {
    case 1:
        printf("The addition of %d+%d = %d",a,b,a+b);
        break;
    case 2:
        printf("The substraction of %d-%d = %d",a,b,a-b);
        break;
    
    case 3:
        printf("The multiplication of %d*%d = %d",a,b,a*b);
        break;
    case 4:
        printf("The modulus of %d %% %d = %d",a,b,a%b);
        break;
    case 5:
        printf("The division of %d/%d = %d",a,b,a/b);
        break;
    }
    return 0;
}