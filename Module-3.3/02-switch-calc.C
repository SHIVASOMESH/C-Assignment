#include<stdio.h>

int main()
{
	int a,b,c,add;
	printf("Enter the frist number :");
	scanf("%d",&a);
	printf("Enter the secend number :");
	scanf("%d",&b);
	
	printf("1.addition.\n2.Subtraction\n3.Multiplication\n4.Division\n");
	printf("Enter the calc (1-4) number :");
	scanf("%d",&c);
	switch(c)
	{
		case 1:
			add=a+b;
			printf("Addition : %d",add);
			break;
		case 2:
			add=a-b;
			printf("Subtraction : %d",add);
			break;
		case 3:
			add=a*b;
			printf("Multiplication : %d",add);
			break;
		case 4:
			add=a/b;
			printf("Division : %d",add);
			break;
	}
	
	
	return 0;
}
