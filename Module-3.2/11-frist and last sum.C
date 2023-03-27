#include<stdio.h>

int main()
{
	int num,rem,sum=0;
	printf("Enter any number :");
	scanf("%d",&num);
	rem=num%10;
	sum=sum+rem;
	while(num>0)
	{
		rem=num%10;
		num=num/10;
	}
	sum=sum+rem;
	printf("Frist and last digit sum=%d",sum);
	
	return 0;
}
