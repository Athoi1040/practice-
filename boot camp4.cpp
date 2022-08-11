#include<stdio.h>
int main()
{
	int a,b,sum,maltiplication;
	char choice;
     printf("enter variable choice");
	 scanf("%c",&choice);
	 printf	("enter two number");
	 scanf("%d%d",&a,&b);

	switch(choice){
	
	case '+' : 
	printf("sum=a+b = %d",a+b);
	break;
	
	case '-' :
	printf("multiplication=a*b=%d",a*b);
	break;
	
	default :
		printf("invalid");
		
	
	}
	
	return 0;
}
	
		
	
	
	
	
