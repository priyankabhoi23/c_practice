//Find the Sum of Numbers in a Given Interval in C
//Method 3 : Using Recursion
#include<stdio.h>
int getSum(int sum,int i,int b)
{

if (i>b)
    return sum;
return i+getSum(sum,i+1,b);
}
int main()
{
    int a,b;
    printf("enter starting range:");
    scanf("%d",&a);
    printf("enter the ending range");
    scanf("%d",&b);
    int sum=getSum(0,a,b);
    printf("%d",sum);
    return 0;

}
