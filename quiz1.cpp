#include<stdio.h>
int main()
{ 
int x=5,y=10,z=12;
z=++x +y++;
y+=y++;
x=x++ ;
printf("x=%d,y=%d,z=%d",x,y,z);

return 0;
}
