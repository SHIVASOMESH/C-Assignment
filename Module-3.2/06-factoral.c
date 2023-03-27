#include<stdio.h>

int main()
{
	int num,i,f=1;
	
	printf("Enter a number to find its Factorial :");
	scanf("%d",&num);
	
	for(i=1;i<=num;i++)
	{
		f = f * i;
	}
	
	printf("Factorial of %d is %d\n",num, f);
	
	
	
	return 0;
}
