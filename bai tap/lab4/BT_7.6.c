#include <stdio.h>

void main()
{
	int x, y;
	x=y=0;
	
	printf("Enter choice (1-3) : ");
	scanf("%d", &x);
	if ( x==1 )
	{
		printf("\nEnter value for y (1-5) : ");
		scanf("%d", &y);
		if ( y<= 5)
			printf("\nThe value for y : %d", y);
		else
			printf("\nThe value of y Exceed 5");
		
	}
	else 
		printf("\nChoice entered was not 1");
}
