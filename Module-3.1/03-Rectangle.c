#include <stdio.h>

int main()
{
//	declare variables
	int l,w,area;
	
//	display inputs
	printf("enter length and width of rectangle (in cm) :");
	scanf("%d %d",&l,&w);
	
//	calc area
	area = l * w;
	
//	display result
	printf("area of rectangle = %d cm\n",area);
	
	return 0;
}
