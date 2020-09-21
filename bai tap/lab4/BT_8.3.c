#include <stdio.h>

int main()
{
	int num1, num2;
	num1 = 77;
	num2 = 90;
	if ( num1 == num2 )
		printf("\n The number are equal");
	else if ( num1 < num2 )
		printf("\n The larger number is : %d ", num2);
	else if ( num1 > num2 )
		printf("\n The larger number is : %d ", num1);
	return 0;
}
