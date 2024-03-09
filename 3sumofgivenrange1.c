//Find the Sum of Numbers in a Given Interval in C
//Method 2 : Using the Formula
#include<stdio.h>
int main(){
int a,b,sum=0;
printf("enter the starting range:");
scanf("%d",&a);
printf("enter the ending range:");
scanf("%d",&b);
sum=(b*(b+1)/2)-(a*(a+1)/2)+a;
printf("Sum=%d",sum);
return 0;
}
