#include<stdio.h>
int main()
{
    float a,b,c,d,e;
    float total,average,percentage;
    printf("Enter your marks in math:");
    scanf("%f",&a);
    printf("Enter your marks in english:");
    scanf("%f",&b);
    printf("Enter your marks in physics:");
    scanf("%f",&c);
    printf("Enter your marks in chemistry:");
    scanf("%f",&d);
    printf("Enter your marks in computer:");
    scanf("%f",&e);
    total=a+b+c+d+e;
    average=(total)/5;
    percentage=(total/500)*100;
    printf("\nTotal marks of the student=%0.2f",total);
    printf("\nAverage marks of the student=%0.2f",average);
    printf("\nPercentage marks of the student=%0.2f",percentage);
    return 0;

}