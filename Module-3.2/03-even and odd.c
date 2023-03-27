#include <stdio.h>

int main()
{
	int num;
	printf("Enter the intiger :");
	scanf("%d",&num);
	
	if(num %2==0)
		printf("this is even",num);
	else
		printf("this is odd",num);
		
	return 0;
}
