#include <stdio.h>

void main()
{
	int a, b,c, sum;
	
	printf("\neEnter any three number: ");
	scanf("%d %d %d", &a, &b, &c);
	
	sum = calculatesum(a, b, c);
	printf("\nSum =%d", sum);
}
calculatesum(int x, int y, int z)
{
	int d;
	d= x + y + z;
	return (d);
}
