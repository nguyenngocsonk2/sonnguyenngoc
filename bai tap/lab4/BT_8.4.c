#include <stdio.h>

int main()
{
	float com=0, sales_amt;
	char garde;
	printf("Enter the Sales Amuont");
	scanf("%f", &sales_amt);
	printf("\nEnter the Garde :");
	scanf("%c", &garde);
	if ( sales_amt > 10000)
		if ( garde == 'A')
			com = sales_amt * 0.1;
		else 
			com = sales_amt * 0.08;
	else
		com = sales_amt * 0.05;
	printf("\n Commission = %f", com);
	return 0;
}
