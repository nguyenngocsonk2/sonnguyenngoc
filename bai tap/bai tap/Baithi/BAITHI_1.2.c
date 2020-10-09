#include <stdio.h>

void main()
{
	int i, num[10];
	for(i= 0; i< 10; i++)
	{
		printf("\nNumber %d: ", i+1);
		scanf("%d", &num[i]);
	}
	printf("Result: ");
	for(i= 9; i >= 0; i--)
	{
		printf("%d ",num[i]);
	}
	return 0;
}
