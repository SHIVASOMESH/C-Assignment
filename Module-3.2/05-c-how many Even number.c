#include <stdio.h>

int main()
{
	int n;
	printf("Even number between 1 to 100 \n");
	
	for(n=1;n<=100;n++){
		
		if(n % 2==0)
		{
			printf("%d\n",n);
		}
	}
	
	
	return 0;
}
