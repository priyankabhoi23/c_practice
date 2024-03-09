//Find the Largest of the Two Numbers in C
//Using if – else Statements
#include<stdio.h>
int main()
{
    int a,b;
    printf("Enter the first no:");
    scanf("%d",&a);
    printf("Enter the second no");
    scanf("%d",&b);
    if(a>b)
        printf("%d is greater",a);
    else
        printf(" %d is greater",b);
    return 0;
}
