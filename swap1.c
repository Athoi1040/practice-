#include<stdio.h>

int main()
{
   
int a,b,temp;
printf("Enter a number a=");
scanf("%d",&a);
printf("Enter a number b=");
scanf("%d",&b);

a=a+b;
b=a-b;
a=a-b;
printf("a=%d b=%d",a,b);

    return 0;
}