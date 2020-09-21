#include <stdio.h>

void main()
{
	int productcode;
	float orderamuont, rate= 0.0;
	printf("\n Please enter the product code :");
	scanf("%d", &productcode);
	printf(" Please enter order amuont:");
	scanf("%f", &orderamuont);
	if ( productcode == 1)
	{
		if( orderamuont >= 500)
			rate = 0.12;
		else if ( orderamuont >= 300)
			rate = 0.08;
		else
			rate = 0.02;
	}
	else if ( productcode ==2 )
	{
		if ( orderamuont >= 2000)
			rate  = 0.10;
		else if ( orderamuont >= 1500)
			rate = 0.05;
	}
	else if ( productcode ==3)
	{
		if ( orderamuont >= 5000)
			rate = 0.10;
		else if ( orderamuont >=2500)
			rate = 0.05;
	}
	orderamuont -= orderamuont * rate;
	printf("The net order amuont is %.2f\n", orderamuont);
}
