//Find the Sum of Numbers in a Given Interval in C
//Method 1 : Using Brute Force
#include<stdio.h>
int main(){

int a,b,sum=0;
printf("enter starting range");
scanf("%d",&a);
printf("enter ending range");
scanf("%d",&b);
for(int i=a;i<=b;i++){
    sum=sum+i;
}
printf("sum=%d",sum);
return 0;

}
