#include <stdio.h>

main() 
{
	printf("The number 555.55 in variuos forms: \n");
	printf("In float form without modifier : \n");
	printf("[%f\n]", 555.55); printf("In exponential form  without any modifier : \n");
	printf("[%e]\n",555.55);
	printf("In float form with - modifier: \n");
	printf("[%-f]\n",555.55);
	printf("In float form with digit string 10.3 as modifier\n");
	printf("[%10.3f]\n",555.55);
	printf("In float form with 0 as modifier: \n");
	printf("[%of]\n",555.55);
	printf("In float form with 0 and digit string 10.3");
	printf("as modifier: \n");
	printf("[%010.3f]\n",555.55);
	printf("In float form with -, 0");
	printf("and digit string 100.3 as modifier :\n");
	printf("[%-0.10.3f]\n",555.55);
	printf("In exponential form with 0 ");
	printf("and digit string 10.3 as modifier:\n");
	printf("[%10.3e]\n",555.55);
	printf("In exponential form with -, 0 ");
	printf("and digit string 10.3 as modifier:\n");
	printf("[%-10.3e]\n\n",555.55);
	
}
