#include <stdio.h>

main() 
{
	printf("A string a various forms: \n");
	printf("Without any format command: \n");
	printf("Good day Mr. Lee. \n");
	printf("With format command but without any modifier : \n");
	printf("[%s]\n","Good day Mr. Lee.");
	printf("With digit string 4 as modifier : \n");
	printf("[%4s]\n","Good day Mr. lee.");
	printf("With digit string 19 as modifier : \n");
	printf("[%19s]\n","Good day Mr. Lee. ");
	printf("With digitstring 23 as modifier :\n");
	printf("[%23s]\n","Good day Mr. Lee. ");
	printf("With digit string 25.4 as modifier : \n");
	printf("[%25.4s]\n","Good day Mr. Lee.");
	printf("With - and digit 25.4 as modifier : \n");
	printf("[%-25.4s]\n","Good day Mr. Shroff");
	
}
