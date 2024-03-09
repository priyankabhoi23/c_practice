#include<stdio.h>
int isEven(num)
{
    return (!(num & 1));

}
int main(){
int num;
printf("enter the number");
scanf("%d",&num);
isEven(num)?printf("even"):printf("odd");
 return 0;}
