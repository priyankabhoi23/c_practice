//Find the Largest of the Two Numbers in C
//Method 2 : Using Ternary Operator
#include<stdio.h>
int main()
{
    int a,b,temp;
    printf("enter the first no:");
    scanf("%d",&a);
    printf("enter the second no:");
    scanf("%d",&b);
    if(a==b)
        printf("%d %d both are same",a,b);
    else
        temp=a>b ?a:b;
        printf("%d is greater ",temp);
    return 0;
}
