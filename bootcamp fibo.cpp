 #include<stdio.h>
 int main()
 {
 	int i,a=0,b=1,sum;
 	printf("%d %d ",a,b);
 	
 	for(i=1;i<=10;i++)
 	{
 	sum=a+b;
	 printf("%d ",sum);
	 a=b;
	 b=sum;
	 	
	 }
 	return 0;
 }
