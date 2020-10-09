#include <stdio.h>

void mn(int a, int b, int number);
void main()
{
	int a, b, number;
		printf("Calculation: \n");
		printf("1. Input Number\n");
		printf("2. Calculate Sum\n");
		printf("3. Calculate Substraction\n");
		printf("4. Calculate Multiplication\n");
		printf("5. Calculate Division\n");
		printf("6. Exit\n");
		scanf("%d", &number);
	if(number = 1)
		{
			printf("nhap so nguyen a: \n");
			scanf("%d", &a);
			printf("nhap so nguyen b: \n");
			scanf("%d",&b);
			printf("%d %d", a, b);
		}
			mn(a,b,number);
}
	void mn(int a, int b,int number)
	{
		int sum, sub, mul, div;
		sum = a + b;
		sub = a - b;
		mul = a * b;
		div = a * b;
		fflush(stdin);
		if(number= 2)
		{
			printf("tog cua no la : %d\n", sum);
		}
		else if(number= 3)
		{
			printf("hieu cua 2 so la: %d\n", sub);
		}
		else if(number= 4)
		{
			printf("tich hai so la: %d\n", mul);
		}
		else if(number= 5)
		{
			printf("thuog hai so la: %d\n", div);
		}
		else if( number = 6)
		{
			printf("Exit\n");
		}
	return ;
	}
	

