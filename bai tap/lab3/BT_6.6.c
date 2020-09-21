#include <stdio.h>

void main()
{
	int a;
	float b;
	char ch, name[40];
	
	printf("Please enter the data\n");
	scanf("%d %f %c %s", &a, &b, &ch, name);
	printf("\nThe value accepted are: %d, %f, %c, %s", a, b, ch, name);
	
}
