#include<stdio.h>
int main()
{
	int marks;
	printf("enter marks");
	scanf("%d",&marks);
	
	
	switch(marks){
	case 8 :
		printf("a+");
		break;
	case 75 ... 79:
		printf("a");
		break;
	default :
	printf("invalid");	
		}
	
	
return 0;	
}
