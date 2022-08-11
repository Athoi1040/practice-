#include<stdio.h>  
int main(){    
int num,i;

printf("Enter any positive number:");
scanf("%d",&num);

for(i=2;i<num;i++){
	
	if(num%i==0){
		
	printf("%d is not Prime Number");
	break;
	
	}
	


   

else{
	
	printf("%d is Prime Number");
	
}
}
   
return 0;  
 }
