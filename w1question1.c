#include<stdio.h>
#include<stdlib.h>
int main()
{
    char name[20],branch[50],hobbies[100];
    int regd;
    printf("Enter your name:");
    gets(name);
    printf("Enter your branch:");
    gets(branch);
    printf("Enter your hobbies:");
    gets(hobbies);

    printf("Enter your Regd no.(only last 3 digits):");
    scanf("%d",&regd);
    printf("My name is %s\n My branch is %s\n My hobbies are %s\n My registration number is %d\n",name,branch,hobbies,regd);
    return 0;
}