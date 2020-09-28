#include <stdio.h>

main()
{
	int var= 500, *ptr_var;
	ptr_var= &var;
	printf("The value of variable (var) and address %u: ",var, &var);
	printf("\nThe value %u is stored at address: %u", ptr_var, &ptr_var);
	printf("\nThe value %d is stored at address: %u", *ptr_var, ptr_var);
}
