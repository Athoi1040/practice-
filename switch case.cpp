#include<stdio.h>
int main()

 {
 	int number1,number2,value,result;
 	
 	printf("enter the number=");
 	scanf("%d",&number1);
 	printf("enter the number=");
 	scanf("%d",&number2);
 	printf("enter the value=");
 	scanf("%d",&value);
 	switch(value)
 	
 	{
 	case 1:
 		result=number1+number2;
 		printf("result of addition is=%d\n",result);
 		
 	case 2:
 		result=number1-number2;
 		printf("result of multiplication is=%d\n",result);
 		
 		
 		
	 }
	
	
	      return 0;
	
		  }          
