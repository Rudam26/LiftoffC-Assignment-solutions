#include<stdio.h>
int main()
{
    int y;
    printf("Enter the number");
    scanf("%d",&y);
    switch (y>0)
    {
    case 1:
        printf("It is positive number");
        break;
    case 0:
        if (y<0)
        {
            printf("It is negative number");
        }
            
        else
        {
            printf("It is zero");
        }
        break;
        
        
    
    
    }
    return 0;
}