#include <stdio.h>

int main()
{
	int a;
	printf("odd number between (1-100) \n");
	
	for(a=1;a<=100;a++)
	{
		if(a % 2 == 1)
		{
			printf("%d\n",a);
		}
	}
	
	return 0;
}
